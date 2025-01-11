# Kasa Sklepu Warzywno-Owocowego

Aplikacja konsolowa służąca do zarządzania koszykiem zakupów w sklepie warzywno-owocowym. Umożliwia dodawanie i usuwanie produktów z koszyka, a także obliczanie całkowitego kosztu zakupów.

## Aplikacja

Gotowy do użytku plik wykonywalny aplikacji znajduje się w katalogu:

`app/appBin/sklep_kasa`

### Uruchomienie aplikacji:
1. Skopiuj cały folder `app` w wybrane miejsce na swoim dysku.
2. Otwórz terminal i przejdź do katalogu `app/appBin`.
3. Ustaw uprawnienia do uruchomienia za pomocą komendy:
   ```bash
   chmod +x sklep_kasa
   ./sklep_kasa
   ```

Kasa sklepu warzywno-owocowego
Aplikacja pozwala na dodawanie i usuwanie produktów z koszyka, oraz obliczenie całościowego kosztu zakupów.
## Aplikacja
Gotowa do użytku aplikacja znajduje się w app/appBin/sklep_kasa.
W celu korzystania z aplikacji należy umieścić, cały folder app w wyznacoznym przez siebie miejscu na dysku, następnie skorzystać z komendy chmod +x sklep_kasa, a następnie ją uruchomić przy pomocy ./sklep_kasa.
## Plik z produktami
Plik CSV zawierający produkty dostępne w aplikacji znajduje się w app/data/products.csv. Do pliku można dodawać produkty wprowadzając odpowiednie wartości w psozczególne kolumny
## Testy jednostkowe
Testy jednostkowe są napisane przy pomocy Google Test, ich build znajduje się w cmake-build-debug/sklep_kasa_tests, aby je uruchomić należy skorzystać z komendy chmod +x sklep_kasa_tests, a następnie ją uruchomić przy pomocy ./sklep_kasa_tests
## Instrukcja obsługi

