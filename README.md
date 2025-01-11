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
3. Ustaw uprawnienia do uruchomienia za pomocą komendy:
   ```bash
   chmod +x sklep_kasa
   ./sklep_kasa
   ```
### Dodanie produktów
W celu dodanie nowego produktu do bazy należy w nowym wierszy pliku products.csv dodać kolejne wartości kolumn:

`unitPrice,code,name,unitType`

* unitPrice- cena za jednostkę
* code- kod produktu (liczba od 000 do 999)
* name- nazwa warzywa lub owocu
* unitType- s (sztuki)/ w (waga)

