#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    int biggest = a; // Initialize biggest with the first number

    // nested if-else statement to compare number
    if (b > biggest) {
        biggest = b;
    }
    if (c > biggest) {
        biggest = c;
    }

    std::cout << "The biggest number is: " << biggest << std::endl;

    return 0;
}