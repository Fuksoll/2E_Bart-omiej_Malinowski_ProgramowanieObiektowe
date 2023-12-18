#include <iostream>
#include <vector>

// Funkcja sprawdzaj�ca, czy liczba jest liczb� pierwsz�
bool isPrime(int number) {
    if (number < 2) {
        return false;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

// Funkcja znajduj�ca liczby p�pierwsze w zadanym przedziale
std::vector<std::pair<int, std::pair<int, int>>> findSemiprimes(int lower, int upper) {
    std::vector<std::pair<int, std::pair<int, int>>> semiprimes;

    for (int i = lower; i <= upper; ++i) {
        for (int j = 2; j <= i / 2; ++j) {
            if (isPrime(j) && isPrime(i / j) && (i % j == 0)) {
                semiprimes.push_back({ i, { j, i / j } });
                break; // Przerwij p�tl� po znalezieniu jednego rozk�adu
            }
        }
    }

    return semiprimes;
}

int main() {
    const int lowerLimit = 1;
    const int upperLimit = 9000;

    std::vector<std::pair<int, std::pair<int, int>>> semiprimes = findSemiprimes(lowerLimit, upperLimit);

    std::cout << "Liczby polpierwsze w przedziale od " << lowerLimit << " do " << upperLimit << ":\n";

    for (const auto& semiprime : semiprimes) {
        std::cout << semiprime.first << " = " << semiprime.second.first << " * " << semiprime.second.second << "\n";
    }

    std::cout << "Liczba polpierwszych w tym przedziale: " << semiprimes.size() << std::endl;

    return 0;
}
