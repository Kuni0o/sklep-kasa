#include <iostream>
#include "../include/Data.h"
#include "../include/Product.h"
#include "../include/Shop.h"

int main() {
    bool isProgramOn = true; // Zmienna odpowiedzialana za dzialanie glownej petli programu
    Shop shop;
    shop.loadProductsFromCSV("../data/products.csv");
    while(isProgramOn){
        int userOption = 0; // Inicjalizacja zmiennej odpowiedzialnej za wykonanie danej opcji
        // Wyswietlenie menu dla uzytkownika
        std::cout << "\n\n-----KASA SKLEPU WARZYWNO-OWOCOWEGO-----" << std::endl;
        std::cout << "1. Wyswietl liste owocow i warzyw" << std::endl;
        std::cout << "2. Dodaj produkt do koszyka" << std::endl;
        std::cout << "3. Wyswietl zawartosc koszyka" << std::endl;
        std::cout << "4. Oblicz sume zakupow" <<std::endl;
        std::cout << "5. Zakoncz" <<std::endl;
        std::cout << "Wybierz opcje:";
        // Walidacja inputa uzytkownika
        while(!(std::cin >> userOption)){
            std::cout << "Blad, wprowadz ponownie:";
            std::cin.clear();
            std::cin.ignore(123, '\n');
        }
        if(userOption == 1){ // Opcja dla wyswietlenia listy owocow i warzyw
            shop.displayProducts();
        }else if(userOption == 2){ // Opcja dla dodania produktu do koszyka
            std::cout << "2";
        }else if(userOption == 3){ // Opcja dla wyswietlenia zawartosci koszyka
            std::cout << "3";
        }else if(userOption == 4){ // Opcja dla obliczenia sumy zakupow
            std::cout << "4";
        }else if(userOption == 5){ // Opcja dla zakonczenia programu
            isProgramOn = false;
        }else{
            std::cout<< "Podana opcja jest niepoprawna.";
        }
    }

    return 0;
}
