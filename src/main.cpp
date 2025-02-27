#include <iostream>
#include <algorithm>
#include "../include/Data.h"
#include "../include/Product.h"
#include "../include/Shop.h"
#include "../include/Basket.h"

int main() {
    bool isProgramOn = true; // Zmienna odpowiedzialana za dzialanie glownej petli programu
    Shop shop;
    Basket basket;
    shop.loadProductsFromCSV("../data/products.csv"); // Zaladowanie produktow do wektora
    // Petla do wykonywania programu
    while(isProgramOn){
        int userOption = 0; // Inicjalizacja zmiennej odpowiedzialnej za wykonanie danej opcji
        // Wyswietlenie menu dla uzytkownika
        std::cout << "\n\n-----KASA SKLEPU WARZYWNO-OWOCOWEGO-----" << std::endl;
        std::cout << "1. Wyswietl liste owocow i warzyw" << std::endl;
        std::cout << "2. Dodaj produkt do koszyka" << std::endl;
        std::cout << "3. Usun produkt z koszyka" <<std::endl;
        std::cout << "4. Wyswietl zawartosc koszyka" << std::endl;
        std::cout << "5. Oblicz sume zakupow" <<std::endl;
        std::cout << "6. Zakoncz" <<std::endl;
        std::cout << "Wybierz opcje:";
        // Walidacja inputa uzytkownika
        while(!(std::cin >> userOption)){
            std::cout << "Podana wartosc musi byc liczba dodatnia:";
            std::cin.clear();
            std::cin.ignore(123, '\n');
        }
        if(userOption == 1){ // Opcja dla wyswietlenia listy owocow i warzyw
            shop.displayProducts();
        }else if(userOption == 2){ // Opcja dla dodania produktu do koszyka
            std::string code;
            double quantity;
            std::cout << "\nWprowadz kod:";
            std::cin >> code;
            std::cout << "Wprowadz ilosc:";
            // Walidacja inputa uzytkownika
            while(!(std::cin >> quantity)){
                std::cout << "Podana wartosc musi byc liczba dodatnia:";
                std::cin.clear();
                std::cin.ignore(123, '\n');
            }
            auto products = shop.getProducts();
            bool found = false;
            // Petla foreach do dodania kazdego poprawnego elementu wektora products do koszyka
            for (auto& product : products) {
                if (product.getCode() == code) {
                    found = true;
                    // Dodanie produktu do koszyka
                    if(basket.addProduct(product, quantity)){
                        std::cout << "Produkt dodany do koszyka.";
                        break;
                    }
                }
            }
            if(!found){
                std::cout << "Nie znaleziono produktu o podanym kodzie.";
            }
        } else if(userOption == 3) { // Opcja dla usuniecia produktu z koszyka
            std::string code;
            double quantity;
            std::cout << "\nWprowadz kod:";
            std::cin >> code;
            std::cout << "Wprowadz ilosc:";
            // Walidacja inputa uzytkownika
            while(!(std::cin >> quantity)){
                std::cout << "Podana wartosc musi byc liczba dodatnia:";
                std::cin.clear();
                std::cin.ignore(123, '\n');
            }
            auto products = shop.getProducts();
            bool found = false;
            for (auto& product : products) {
                if (product.getCode() == code) {
                    found = true;
                    // Usuniecie produktu z koszyka
                    if(basket.removeProduct(product, quantity)) {
                        std::cout << "Produkt usuniety z koszyka.";
                        break;
                    }
                }
            }
            if(!found){
                std::cout << "Nie znaleziono produktu o podanym kodzie.";
            }
        }else if(userOption == 4){ // Opcja dla wyswietlenia zawartosci koszyka
            basket.displayBasket();
        }else if(userOption == 5){ // Opcja dla przejscia do podsumowania
            std::string conf;
            double total = basket.calculateTotal(const_cast<std::vector<Product> &>(shop.getProducts()));
            basket.displaySummary(const_cast<std::vector<Product> &>(shop.getProducts()), total);
            std::cout << "\nZatwierdzic podsumowanie? [T/n]";
            std::cin >> conf;
            if(conf == "T" || conf == "t"){ // W przypadku zatwierdzenia podsumowania zerujemy mapy bedace koszykami oraz total
                basket.clearItemsByCount();
                basket.clearItemsByWeight();
                total = 0;
            }
        }else if(userOption == 6){ // Opcja dla zakonczenia programu
            isProgramOn = false;
        }else{
            std::cout<< "Podana opcja jest niepoprawna.";
        }
    }

    return 0;
}
