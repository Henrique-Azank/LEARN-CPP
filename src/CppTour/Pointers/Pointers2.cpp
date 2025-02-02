#include <iostream>

int main(){

    // Create a char array
    char v[6];

    // Populate the forth element of the array
    v[3] = 'v';

    // Create a pointer to the forth element of the array
    char* p = &v[3];

    // Create a new variable to store the value of the pointer
    char value = *p;

    // Get the real value of the pointer (will not link it to the address)
    char value2 = v[3];

    // Print the value of the pointer
    std::cout << "Pointer value: " << value << std::endl;

    // Print the value of the pointer
    std::cout << "Array value (not pointer): " << value2 << std::endl;

    // Modify the original array's forth element
    v[3] = 'a';

    // Reprint the value of the pointer
    std::cout << "Pointer value after change: " << *p << std::endl;

        // Print the value of the pointer
    std::cout << "Array value (not pointer): " << value2 << std::endl;

    // Exit the program
    return 0;
}