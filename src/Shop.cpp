#include "../include/Shop.h"
#include <iostream>

// Metoda dodajaca produkt do wektora
void Shop::addProduct(const Product& product) {
    products.push_back(product);
}

// Metoda ladujaca produkty z pliku CSV do wektora products
void Shop::loadProductsFromCSV(const std::string& fileName) {
    Data d;
    int rowCount = d.getNumberOfRows(fileName);

    if (rowCount <= 1) { // Plik zawiera tylko wiersz naglowkowy lub zaden
        std::cout << "Nie mozna zaladowac produktow, plik jest pusty lub nie istnieje." << std::endl;
        return;
    }

    for (int i = 2; i <= rowCount; i++) { // Pierwszy wiersz to wiersz nagłowkowy
        try {
            std::vector<std::string> values = Data::getValuesFromCSVRow(fileName, i);
            if (values.size() == 4) { // Sprawdzenie czy wiersz posiada cztery wartosci
                double price = std::stod(values[0]); // Konwersja string -> double
                std::string code = values[1];
                std::string name = values[2];
                std::string unitType = values[3];

                // Tworzenie obiektu Product i dodanie do listy produktow
                Product product(price, code, name, unitType);
                addProduct(product);
            } else {
                std::cout << "Nieprawidlowy wiersz w pliku CSV, pomijam." << std::endl;
            }
        } catch (const std::invalid_argument&) {
            std::cout << "Nieprawidlowy format danych w wierszu " << i << ", pomijam." << std::endl;
        } catch (const std::out_of_range&) {
            std::cout << "Wartosc liczby spoza zakresu w wierszu " << i << ", pomijam." << std::endl;
        }
    }
}

// Wyswietla liste produktow
void Shop::displayProducts(){
    if (products.empty()) {
        std::cout << "Brak produktow w sklepie." << std::endl;
        return;
    }

    std::cout << "\n---LISTA PRODUKTOW---\n";
    for (auto& product : products) {
        product.displayProduct();
    }
}
// Getter
const std::vector<Product>& Shop::getProducts() const {
    return products;
}

