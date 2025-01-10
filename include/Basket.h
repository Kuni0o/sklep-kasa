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
    // Dodanie produktu do koszyka
    void addProduct(Product& product, double quantity);

    // Usuniecie produktu z koszyka
    void removeProduct(Product& product, double quantity);

    // Wyswietlenie zawartosci koszyka
    void displayBasket();

    // Obliczenie calkowitej wartosci koszyka
    double calculateTotal(std::vector<Product>& products);
};

#endif // BASKET_H
