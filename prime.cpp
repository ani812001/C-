#include <iostream>
#include <cmath> // For sqrt() function

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true; // 2 is the only even prime number
    if (n % 2 == 0) return false; // Eliminate other even numbers

    for (int i = 3; i <= std::sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}
