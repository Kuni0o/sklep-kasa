#include "../include/Basket.h"
#include <iostream>
#include <iomanip>
#include "math.h"

void Basket::addProduct(Product &product, double quantity) {
    double intpart;
    if(product.getUnitType() == "w"){
        // Dodanie produktu do koszyka
        if (itemsByWeight.find(product.getCode()) != itemsByWeight.end()) {
            itemsByWeight[product.getCode()] += quantity; // Zwiększenie istniejącej ilości
        } else {
            itemsByWeight[product.getCode()] = quantity; // Dodanie nowego produktu
        }
    }else if(product.getUnitType() == "s"){
        if(modf(quantity, &intpart) == 0){
            // Dodanie produktu do koszyka
            if (itemsByCount.find(product.getCode()) != itemsByCount.end()) {
                itemsByCount[product.getCode()] += quantity; // Zwiekszenie istniejacej ilosci
            } else {
                itemsByCount[product.getCode()] = quantity; // Dodanie nowego produktu
            }
        }else{
            std::cout << "ER";
        }
    }
}
void Basket::displayBasket() {
    std::cout << "Produkty w sztukach:\n";
    for (const auto& item : itemsByCount) {
        std::cout << "Kod: " << item.first << ", Ilość: " << item.second << std::endl;
    }

    std::cout << "Produkty na wagę:\n";
    for (const auto& item : itemsByWeight) {
        std::cout << "Kod: " << item.first << ", Ilość: " << item.second << " kg" << std::endl;
    }
}
