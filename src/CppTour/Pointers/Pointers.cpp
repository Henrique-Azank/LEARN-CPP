
// Include the STD I/O library
#include <iostream>

// Main function
int main() {

    // Creating a char array
    // with constant size
    char v[6];

    // Create a pointer to the forth
    // element of the array
    char* p = &v[3];

    // Assign a value to the pointer
    *p = 'a';

    // Print the value of the forth 
    // element of the array
    std::cout << v[3] << std::endl;

    // Alter the value of the forth with
    // the original object
    v[3] = 'b';

    // Print the value of the pointer
    std::cout << *p << std::endl;

    // Exit the program
    return 0;
}


