#ifndef SKLEP_KASA_PRODUCT_H
#define SKLEP_KASA_PRODUCT_H

#include "string"

class Product{
private:
    double unitPrice;
    std::string code;
    std::string name;
    std::string unitType;

public:
    //Konsturktor
    Product(double unitPrice, std::string code, std::string name, std::string unitType);
    //Settery
    void setUnitPrice(double unitPrice);
    void setName(std::string name);
    void setCode(std::string code);
    void setUnitType(std::string unitType);
    //Gettery
    double getUnitPirce();
    std::string getName();
    std::string getCode();
    std::string getUnitType();
    // Metoda sluzaca do wyswietlania informacji produktu
    void displayProduct();

};
#endif //SKLEP_KASA_PRODUCT_H
