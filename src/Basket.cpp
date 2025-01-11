#include "../include/Basket.h"
#include <iostream>
#include <iomanip>
#include "math.h"
// Gettery
std::unordered_map<std::string, double> Basket::getItemsByWeight() {
    return itemsByWeight;
}

std::unordered_map<std::string, int> Basket::getItemsByCount(){
    return itemsByCount;
}
// Metoda do dodania produktu do koszyka
bool Basket::addProduct(Product &product, double quantity) {
    double intpart;
    if(quantity >= 0){
        if(product.getUnitType() == "w"){
            // Dodanie produktu do koszyka
            if (itemsByWeight.find(product.getCode()) != itemsByWeight.end()) {
                itemsByWeight[product.getCode()] += quantity; // Zwiekszenie istniejccej ilosci
            } else {
                itemsByWeight[product.getCode()] = quantity; // Dodanie nowego produktu
            }
            return true;
        }else if(product.getUnitType() == "s"){
            if(modf(quantity, &intpart) == 0){
                // Dodanie produktu do koszyka
                if (itemsByCount.find(product.getCode()) != itemsByCount.end()) {
                    itemsByCount[product.getCode()] += quantity; // Zwiekszenie istniejacej ilosci
                } else {
                    itemsByCount[product.getCode()] = quantity; // Dodanie nowego produktu
                }
                return true;
            }else{
                std::cout << "Nie udalo sie dodac produktu. Sztuki musza byc liczba calkowita nieujemna.";
            }
        }
    }else{
        std::cout << "Ilosc musi byc nieujemna.";
    }
    return false;
}
// Metoda do usuniecie produktu z koszyka
bool Basket::removeProduct(Product &product, double quantity) {
    double intpart;
    if(quantity >= 0){
        if(product.getUnitType() == "w"){ // Waga
            // Usuniecie produktu z koszyka
            if (itemsByWeight.find(product.getCode()) != itemsByWeight.end()) {
                if(itemsByWeight[product.getCode()] == quantity){
                    itemsByWeight.erase(product.getCode()); // Usuniecie produktu z koszyka
                    return true;
                }else if(itemsByWeight[product.getCode()] < quantity){
                    std::cout << "Ilosc do usuniecia przekracza, ilosc w koszyku.";
                }else{
                    itemsByWeight[product.getCode()] -= quantity; // Zmniejszenie ilosci z koszyka
                    return true;
                }
            }
        }else if(product.getUnitType() == "s"){ // Sztuki
            if(modf(quantity, &intpart) == 0){
                // Usuniecie produktu z koszyka
                if (itemsByCount.find(product.getCode()) != itemsByCount.end()) {
                    if(itemsByCount[product.getCode()] == quantity){
                        itemsByCount.erase(product.getCode()); // Usuniecie produktu z koszyka
                        return true;
                    }else if(itemsByCount[product.getCode()] < quantity){
                        std::cout << "Ilosc do usuniecia przekracza, ilosc w koszyku.";
                    }else{
                        itemsByCount[product.getCode()] -= quantity; // Zmniejszenie ilosci z koszyka
                        return true;
                    }
                }
            }else{
                std::cout << "Nie udalo sie usunac produktu. Sztuki musza byc liczba calkowita dodatnia.";
            }
        }
    }else{
        std::cout << "Ilosc musi byc nieujemna.";
    }
    return false;
}
// Metoda do wyswietlenie zawartosci koszyka
void Basket::displayBasket() {
    std::cout << "\n---ZAWARTOSC KOSZYKA---\n";
    for (const auto& item : itemsByCount) {
        std::cout << "Kod: " << item.first << ", Ilosc: " << item.second << " szt." << "\n";
    }
    for (const auto& item : itemsByWeight) {
        std::cout << "Kod: " << item.first << ", Ilosc: " << item.second << " kg" << "\n";
    }
}
// Metoda do wyswietlenia podsumowania
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
// Metoda do obliczenie calkowitej wartosci koszyka
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
// Metoda do wyczyszczenia mapy itemsByWeight
void Basket::clearItemsByWeight(){
    itemsByWeight.clear();
}
// Metoda do wyczyszczenia mapy itemsByCount
void Basket::clearItemsByCount(){
    itemsByCount.clear();
}
