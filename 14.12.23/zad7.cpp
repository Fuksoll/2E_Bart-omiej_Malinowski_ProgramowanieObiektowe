#include <iostream>

// Funkcja obliczaj�ca silni� iteracyjnie
unsigned long long iteracyjnaSilnia(int x) {
    if (x < 0 || x > 12) {
        std::cerr << "Nieprawidlowy argument. Podaj liczbe naturalna od 0 do 12." << std::endl;
        return 0;
    }

    unsigned long long wynik = 1;
    for (int i = 1; i <= x; ++i) {
        wynik *= i;
    }

    return wynik;
}

// Funkcja obliczaj�ca silni� rekurencyjnie
unsigned long long rekurencyjnaSilnia(int x) {
    if (x < 0 || x > 12) {
        std::cerr << "Nieprawidlowy argument. Podaj liczbe naturalna od 0 do 12." << std::endl;
        return 0;
    }

    // Warunek zako�czenia rekurencji
    if (x == 0) {
        return 1;
    }
    else {
        // Wywo�anie rekurencyjne
        return x * rekurencyjnaSilnia(x - 1);
    }
}

int main() {
    // Przyk�adowe u�ycie funkcji obliczaj�cej silni� iteracyjnie
    int x_iteracyjnie = 6;
    std::cout << "Silnia iteracyjnie dla x = " << x_iteracyjnie << ": " << iteracyjnaSilnia(x_iteracyjnie) << std::endl;

    // Przyk�adowe u�ycie funkcji obliczaj�cej silni� rekurencyjnie
    int x_rekurencyjnie = 6;
    std::cout << "Silnia rekurencyjnie dla x = " << x_rekurencyjnie << ": " << rekurencyjnaSilnia(x_rekurencyjnie) << std::endl;

    return 0;
}
