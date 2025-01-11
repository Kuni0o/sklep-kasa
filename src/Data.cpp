#include "../include/Data.h"
#include <iostream>
// Metoda zwracająca dane z pliku CSV na podstawie numeru wiersza
std::vector<std::string> Data::getValuesFromCSVRow(const std::string& fileName, int rowNumber) {
    std::ifstream file(fileName); // plik csv
    std::string line; // wiersz pliku csv
    std::vector<std::string> rowValues; // wektor zawierajacy wartosci wiersza oddzielone przecinkiem
    // Sprawdzenie poprawnosci otwarcia pliku
    if (!file.is_open()) {
        std::cerr << "Nie mozna otworzyc pliku: " << fileName << std::endl;
        return rowValues;  // Zwracamy pusty wektor
    }
    int currentRow = 0;
    // Przechodzimy przez wszystkie linie pliku
    while(std::getline(file, line)){
        currentRow++;
        // Jeśli znalezlismy odpowiedni wiersz
        if (currentRow == rowNumber) {
            std::stringstream ss(line);
            std::string cell;
            // Dzielimy wiersz na komorki
            while (std::getline(ss, cell, ',')) {
                rowValues.push_back(cell);
            }
            break;
        }
    }
    file.close();
    return rowValues; // Zwracamy wektor z wartościami kolumn
}
// Metoda zwarcajace liczbe wierszy w pliku CSV
int Data::getNumberOfRows(const std::string& fileName) {
    std::ifstream file(fileName); // plik csv
    std::string line; // wiersz pliku csv
    int rowCount = 0;
    // Sprawdzenie poprawnosci otwarcia pliku
    if (!file.is_open()) {
        std::cerr << "Nie mozna otworzyc pliku: " << fileName << std::endl;
        return -1;
    }
    // Zliczamy linie w pliku
    while (std::getline(file, line)) {
        rowCount++; // Zwiekszamy licznik wierszy
    }
    file.close();
    return rowCount; // Zwracamy liczbe wierszy
}
