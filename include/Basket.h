#ifndef BASKET_H
#define BASKET_H

#include <unordered_map>
#include <string>
#include <vector>
#include "Product.h"

class Basket {
private:
    std::unordered_map<std::string, double> itemsByWeight; // Mapa: kod -> ilosc (kg)
    std::unordered_map<std::string, int> itemsByCount;     // Mapa: kod -> ilosc (sztuki)
public:
    // Metoda do dodanie produktu do koszyka
    void addProduct(Product& product, double quantity);
    // Metoda do usuniecie produktu z koszyka
    void removeProduct(Product& product, double quantity);
    // Metoda do wyswietlenie zawartosci koszyka
    void displayBasket();
    // Metoda do wyswietlenia podsumowania
    void displaySummary(std::vector<Product>& products, double total);
    // Metoda do obliczenie calkowitej wartosci koszyka
    double calculateTotal(std::vector<Product>& products);
    // Metoda do wyczyszczenia mapy itemsByWeight
    void clearItemsByWeight();
    // Metoda do wyczyszczenia mapy itemsByCount
    void clearItemsByCount();
};

#endif // BASKET_H
