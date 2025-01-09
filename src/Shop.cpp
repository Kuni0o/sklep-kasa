#include "../include/Shop.h"
#include <iostream>

// Metoda dodajaca produkt do wektora
void Shop::addProduct(const Product& product) {
    products.push_back(product);
}

// Ładuje produkty z pliku CSV
void Shop::loadProductsFromCSV(const std::string& fileName) {
    Data d;
    int rowCount = d.getNumberOfRows(fileName);

    if (rowCount <= 1) {
        std::cout << "Nie mozna zaladowac produktow, plik jest pusty lub nie istnieje." << std::endl;
        return;
    }

    for (int i = 2; i <= rowCount; i++) { // Pierwszy wiersz jest wierszem naglowkowym
        std::vector<std::string> values = Data::getValuesFromCSVRow(fileName, i);
        if (values.size() == 4) { // Sprawdzenie czy wiersz posiada cztery wartosci
            double price = std::stod(values[0]); // Konwersja string -> double
            std::string code = values[1];
            std::string name = values[2];
            std::string unitType = values[3];
            // Tworzenie obiektu Product i dodanie do listy produktów
            Product product(price, code, name, unitType);
            addProduct(product);
        } else {
            std::cout << "Nieprawidlowy wiersz w pliku CSV, pomijam." << std::endl;
        }
    }
}
// Wyświetla listę produktów
void Shop::displayProducts(){
    if (products.empty()) {
        std::cout << "Brak produktow w sklepie." << std::endl;
        return;
    }

    std::cout << "\nLista produktow:\n";
    for (auto& product : products) {
        product.displayProduct();
    }
}

