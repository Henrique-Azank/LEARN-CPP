// Base dependencies
#include <iostream>

// Function that counts the number of occurences
// of a given char in a string
void countChar(char* str, char c) {

    // Check if the string is empty
    if (str == nullptr) {
        return;
    }

    // Print the string
    std::cout << str << std::endl;

    // Create a counter
    int count = 0;

    // Iterate over the string
    for (; *str != '\0'; ++str) {
        // Check if the current character is the one we are looking for
        if (*str == c) {
            // Increase the counter
            ++count;
        }
    }

    // Print the result
    std::cout << "The character " << c << " appears " << count << " times." << std::endl;

}

// Function that gets a string from the user
// with a maximum size and dynamic memory allocation
char* getUserInput(int maxSize) {
    // Allocate memory dynamically
    char* input = new char[maxSize];

    // Ask the user for a string
    std::cout << "Enter a string: ";
    std::cin.getline(input, maxSize);
    
    // Return the pointer
    return input;
}

// Main function that calls the countChar function
int main() {

    // Get the user input string
    char* str = getUserInput(100);

    // Define the character to find
    char c = 'a';

    // Call the function
    countChar(str, c);

    // Free the memory
    delete[] str;
};

