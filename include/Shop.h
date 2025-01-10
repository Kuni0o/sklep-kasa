#ifndef SKLEP_KASA_SHOP_H
#define SKLEP_KASA_SHOP_H
#include <vector>
#include "Product.h"
#include "Data.h"

class Shop {
private:
    std::vector<Product> products; // Tablica przechowująca obiekty Product

public:
    // Metoda dodajaca produkt do wektora
    void addProduct(const Product& product);
    void loadProductsFromCSV(const std::string& fileName);
    void displayProducts();
    // Getter do wektora
    const std::vector<Product>& getProducts() const;
};
#endif //SKLEP_KASA_SHOP_H
