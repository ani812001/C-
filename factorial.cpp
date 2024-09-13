#include <iostream>

// Iterative method to find factorial
unsigned long long int factorialIterative(int n) {
    unsigned long long int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Recursive method to find factorial
unsigned long long int factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main() {
    int num;
    
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
        return 1;
    }

    // Calculate factorial using iterative method
    unsigned long long int resultIterative = factorialIterative(num);
    std::cout << "Factorial of " << num << " (iterative): " << resultIterative << std::endl;

    // Calculate factorial using recursive method
    unsigned long long int resultRecursive = factorialRecursive(num);
    std::cout << "Factorial of " << num << " (recursive): " << resultRecursive << std::endl;

    return 0;
}
