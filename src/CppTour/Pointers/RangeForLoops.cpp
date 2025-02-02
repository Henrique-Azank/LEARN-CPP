#include <iostream>

// Main function
int main() {

    // Create an int array
    int v[6] = {1, 2, 3, 4, 5, 6};

    // Create another int array
    int v2[6] = {1, 2, 3, 4, 5, 6};

    // In the first loop, access the values of the array
    // by copying them into the loop variable
    for (int value : v) {        
        // Increase the value by one
        ++value;
    }

    // After the loop, print the original array's first value
    std::cout << "Original array first value (after access by value): " << v[0] << std::endl;

    // In the second loop, access the values of the array
    // by reference
    for (int& value : v2) {        
        // Increase the value by one
        ++value;
    }

    // After the loop, print the original array's first value
    std::cout << "Original array first value (after access by reference): " << v2[0] << std::endl;

    // Return the function
    return 0;
};






