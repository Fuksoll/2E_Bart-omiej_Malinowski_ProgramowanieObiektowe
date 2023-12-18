#include<iostream>

// Funkcja obliczaj�ca najwi�kszy wsp�lny dzielnik
unsigned int gcd(unsigned int a, unsigned int b) {
    while (b != 0) {
        unsigned int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Funkcja skracaj�ca u�amek zwyk�y
void skrocUlamek(unsigned int& licznik, unsigned int& mianownik) {
    unsigned int dzielnik = gcd(licznik, mianownik);
    licznik /= dzielnik;
    mianownik /= dzielnik;
}

int main() {
    std::cout << "Program do skracania ulamkow zwyklych\n";

    // Pobranie licznika od u�ytkownika
    unsigned int licznik;
    std::cout << "Podaj licznik: ";
    std::cin >> licznik;

    // Pobranie mianownika od u�ytkownika
    unsigned int mianownik;
    do {
        std::cout << "Podaj mianownik (niezerowy): ";
        std::cin >> mianownik;
    } while (mianownik == 0);

    // Wy�wietlenie u�amka nieskr�conego
    std::cout << "Ulamek nieskrocony: " << licznik << "/" << mianownik << "\n";

    // Wywo�anie funkcji skracaj�cej u�amek
    skrocUlamek(licznik, mianownik);

    // Wy�wietlenie u�amka skr�conego
    std::cout << "Ulamek skrocony: " << licznik << "/" << mianownik << "\n";

    return 0;
}
