#ifndef SKLEP_KASA_SHOP_H
#define SKLEP_KASA_SHOP_H
#include <vector>
#include "Product.h"
#include "Data.h"

class Shop {
private:
    // Tablica przechowujaca obiekty Product
    std::vector<Product> products;

public:
    // Metoda dodajaca produkt do wektora
    void addProduct(const Product& product);
    // Metoda ladujaca produkty z pliku CSV do wektora products
    void loadProductsFromCSV(const std::string& fileName);
    // Metoda wyswietlajaca zawartosc koszyka
    void displayProducts();
    // Getter do wektora
    const std::vector<Product>& getProducts() const;
};
#endif //SKLEP_KASA_SHOP_H
