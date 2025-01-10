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
            std::cout << "Nie udalo sie dodac produktu. Sztuki musza byc liczba calkowita dodatnia.";
        }
    }
}

void Basket::removeProduct(Product &product, double quantity) {
    double intpart;
    if(product.getUnitType() == "w"){
        // Usuniecie produktu z koszyka
        if (itemsByWeight.find(product.getCode()) != itemsByWeight.end()) {
            if(itemsByWeight[product.getCode()] == quantity){
                itemsByWeight.erase(product.getCode());
            }else if(itemsByWeight[product.getCode()] < quantity){
                std::cout << "Ilosc do usuniecia przekracza, ilosc w koszyku.";
            }else{
                itemsByWeight[product.getCode()] -= quantity;
            }
        } else {
            std::cout << "Produkt o podanym kodzie nie znajduje sie w koszyku.";
        }
    }else if(product.getUnitType() == "s"){
        if(modf(quantity, &intpart) == 0){
            // Usuniecie produktu z koszyka
            if (itemsByWeight.find(product.getCode()) != itemsByWeight.end()) {
                if(itemsByWeight[product.getCode()] == quantity){
                    itemsByWeight.erase(product.getCode());
                }else if(itemsByWeight[product.getCode()] < quantity){
                    std::cout << "Ilosc do usuniecia przekracza, ilosc w koszyku.";
                }else{
                    itemsByWeight[product.getCode()] -= quantity;
                }
            } else {
                std::cout << "Produkt o podanym kodzie nie znajduje sie w koszyku.";
            }
        }else{
            std::cout << "Nie udalo sie usunac produktu. Sztuki musza byc liczba calkowita dodatnia.";
        }
    }
}

void Basket::displayBasket() {
    std::cout << "\n---ZAWARTOSC KOSZYKA---\n";
    for (const auto& item : itemsByCount) {
        std::cout << "Kod: " << item.first << ", Ilosc: " << item.second << " szt." << "\n";
    }
    for (const auto& item : itemsByWeight) {
        std::cout << "Kod: " << item.first << ", Ilosc: " << item.second << " kg" << "\n";
    }
}

void Basket::displaySummary(std::vector<Product>& products, double total){
    std::cout << "\n---PODSUMOWANIE---\n";
    for (auto& product : products) {
        for (const auto& item : itemsByCount) {
            if(item.first == product.getCode()){
                std::cout << product.getName() << " " << product.getCode() << " " << item.second << " * " << product.getUnitPirce() << " PLN" << "\n";
            }
        }
        for (const auto& item : itemsByWeight) {
            if(item.first == product.getCode()) {
                std::cout << product.getName() << " " << product.getCode() << " " << item.second << " * " << product.getUnitPirce() << " PLN" << "\n";
            }
        }

    }
    std::cout << "RAZEM: " << total << " PLN";
}

double Basket::calculateTotal(std::vector<Product>& products){
    double total = 0;
    for (auto& product : products) {
        for (const auto& item : itemsByCount) {
            if(item.first == product.getCode()){
                total += item.second * product.getUnitPirce();
            }
        }
        for (const auto& item : itemsByWeight) {
            if(item.first == product.getCode()) {
                total += item.second * product.getUnitPirce();
            }
        }
    }
    return total;
}

void Basket::clearItemsByWeight(){
    itemsByWeight.clear();
}

void Basket::clearItemsByCount(){
    itemsByCount.clear();
}
