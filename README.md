# Kasa Sklepu Warzywno-Owocowego

Aplikacja konsolowa służąca do zarządzania koszykiem zakupów w sklepie warzywno-owocowym. Umożliwia dodawanie i usuwanie produktów z koszyka, a także obliczanie całkowitego kosztu zakupów.

## Aplikacja

Gotowy do użytku plik wykonywalny aplikacji znajduje się w katalogu:

`app/appBin/sklep_kasa`

Gotowy do użytku plik z produktami znajduje się w katalogu:

`app/data/products.csv`

### Uruchomienie aplikacji:
1. Skopiuj cały folder `app` w wybrane miejsce na swoim dysku.
2. Otwórz terminal i przejdź do katalogu `app/appBin`.
3. Ustaw uprawnienia do uruchomienia i uruchom aplikację za pomocą komend:
   ```bash
   chmod +x sklep_kasa
   ./sklep_kasa
   ```
### Dodanie produktów
W celu dodanie nowego produktu do bazy należy w nowym wierszy pliku products.csv dodać kolejne wartości kolumn:

`unitPrice,code,name,unitType`

* unitPrice- cena za jednostkę
* code- kod produktu
* name- nazwa warzywa lub owocu
* unitType- s (sztuki)/ w (waga)

## Testy jednostkowe

Testy jednostkowe zostały zaimplementowane przy użyciu frameworka Google Test. Plik wykonywalny testów znajduje się w katalogu:

`cmake-build-debug/sklep_kasa_tests`

### Uruchomienie testów:
1. Otwórz terminal i przejdź do katalogu `cmake-build-debug`
2. Ustaw uprawnienia do uruchomienia i uruchom testy za pomocą komend:
   ```bash
   chmod +x sklep_kasa_tests
   ./sklep_kasa_tests
   ```

## Instrukcja obsługi
### Uruchomienie aplikacji
Po uruchomieniu aplikacji wyświetli się następujące menu
   ```
   -----KASA SKLEPU WARZYWNO-OWOCOWEGO-----
   1. Wyswietl liste owocow i warzyw
   2. Dodaj produkt do koszyka
   3. Usun produkt z koszyka
   4. Wyswietl zawartosc koszyka
   5. Oblicz sume zakupow
   6. Zakoncz
   Wybierz opcje:
   ```
### Opcja 1
Wyświetla zawartość pliku z produktami w celu łatwego przypomnienia kodów produktów.

### Opcja 2
Pozwala dodać produkt do koszyka poprzez podanie kodu produktu oraz ilośc.

### Opcja 3
Pozwala usunąć produkt w całości lub jego część z koszyka poprzez podanie kodu i ilości.

### Opcja 4 
Wyświetla aktualną zawartość koszyka z produktami.

### Opcja 5
Wyświetla podsumowanie produktów razem z ceną końcową, jeżeli wszystko się zgadza i zatwierdzimy je koszyk oraz zmienną z ceną zostaną wyczyszczone.

### Opcja 6
Przerywa wykonywanie pętli programu przez co kończy jego działanie.
