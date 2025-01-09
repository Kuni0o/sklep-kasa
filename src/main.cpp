#include <iostream>

int main() {
    bool isProgramOn = true; // zmienna odpowiedzialana za dzialanie glownej petli programu
    while(isProgramOn){
        int userOption = 0; // inicjalizacja zmiennej odpowiedzialnej za wykonanie danej opcji
        // Wyswietlenie menu dla uzytkownika
        std::cout << "\n\n-----KASA SKLEPU WARZYWNO-OWOCOWEGO-----" << std::endl;
        std::cout << "1. Wyswietl liste owocow i warzyw" << std::endl;
        std::cout << "2. Dodaj produkt do koszyka" << std::endl;
        std::cout << "3. Wyswietl zawartosc koszyka" << std::endl;
        std::cout << "4. Oblicz sume zakupow" <<std::endl;
        std::cout << "5. Zakoncz" <<std::endl;
        std::cout << "Wybierz opcje: ";
        std::cin >> userOption;
        if(userOption == 1){
            std::cout << "1";
        }else if(userOption == 2){
            std::cout << "2";
        }else if(userOption == 3){
            std::cout << "3";
        }else if(userOption == 4){
            std::cout << "4";
        }else if(userOption == 5){
            isProgramOn = false;
        }else{
            std::cout<< "Podana opcja jest niepoprawna.";
        }
    }

    return 0;
}
