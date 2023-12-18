#include <iostream>

const float PI = 3.14;

// Funkcja obliczaj�ca pole kwadratu
float obliczPole(float bok) {
    return bok * bok;
}

// Funkcja obliczaj�ca pole prostok�ta
float obliczPole(float bokA, float bokB) {
    return bokA * bokB;
}

// Funkcja obliczaj�ca pole ko�a
double obliczPole(double promien) {
    return PI * promien * promien;
}

int main() {
    // Przyk�ady u�ycia funkcji
    float bokKwadratu = 7.0;
    float bokAProstokata = 7.0;
    float bokBProstokata = 9.0;
    double promienKola = 3.0;

    std::cout << "Pole kwadratu o boku " << bokKwadratu << ": " << obliczPole(bokKwadratu) << std::endl;
    std::cout << "Pole prostokata o bokach " << bokAProstokata << " i " << bokBProstokata << ": " << obliczPole(bokAProstokata, bokBProstokata) << std::endl;
    std::cout << "Pole kola o promieniu " << promienKola << ": " << obliczPole(promienKola) << std::endl;

    return 0;
}