// Base dependencies
#include <iostream>

// Function displaying the difference
// between using references and pointers
int main() {

    // Initialize two integers
    int a = 10;
    int b = 20;

    // Create a pointer to a
    int* q = &a;

    // Print the value of a and the pointer
    std::cout << "Initial value of a: " << a << std::endl;
    std::cout << "Pointer to a: " << q << std::endl;

    // Print the value of a with the pointer
    std::cout << "Value of a with pointer: " << *q << std::endl;

    // Create a reference to b
    int& r = b;

    // Print the value of b and the reference
    std::cout << "Initial value of b: " << b << std::endl;
    std::cout << "Reference to b: " << r << std::endl;

    // Alter the value of b
    std::cout << "Changing the value of b..." << std::endl;
    b = 30;

    // Re-print the value of b and the reference
    std::cout << "Reference to b: " << r << std::endl;

};
