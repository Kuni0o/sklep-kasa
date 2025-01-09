#include "../include/Product.h"
#include <iostream>

// Konstruktor klasy produkt
Product::Product(double unitPrice, std::string code, std::string name, std::string unitType) {
    this->unitPrice = unitPrice;
    this->code = code;
    this->name = name;
    this->unitType = unitType;
}
//Settery
void Product::setUnitPrice(double unitPrice) {
    this->unitPrice = unitPrice;
}

void Product::setName(std::string name) {
    this->name = name;
}

void Product::setCode(std::string code) {
    this->code = code;
}

void Product::setUnitType(std::string unitType) {
    this->unitType = unitType;
}
// Gettery
double Product::getUnitPirce() {
    return unitPrice;
};

std::string Product::getName() {
    return name;
}

std::string Product::getCode() {
    return code;
}

std::string Product::getUnitType() {
    return unitType;
}

void Product::displayProduct() {
    std::cout << name << ", Kod: " << code << ", "<< "Cena: " << unitPrice << "\n";
}