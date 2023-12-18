#include <iostream>

// Funkcja obliczaj�ca najwi�kszy wsp�lny dzielnik za pomoc� algorytmu Euklidesa
int NWD(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return NWD(b, a % b);
    }
}

int main() {
    int liczba1, liczba2;

    // Wprowadzenie dw�ch liczb naturalnych od u�ytkownika
    std::cout << "Podaj pierwsza liczbe naturalna: ";
    std::cin >> liczba1;

    std::cout << "Podaj druga liczbe naturalna: ";
    std::cin >> liczba2;

    // Wywo�anie funkcji NWD i wy�wietlenie wyniku
    int wynik = NWD(liczba1, liczba2);
    std::cout << "Najwiekszy wspolny dzielnik: " << wynik << std::endl;

    return 0;
}
