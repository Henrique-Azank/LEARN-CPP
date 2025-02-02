// Modification of CountPointer.cpp 
// to count the number of instances of a char
// using the standard library string class

#include <iostream>
#include <string>

// Function that queries the user for a string
std::string getUserInput() {
    // Create a string variable
    std::string input;

    // Ask the user for a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Return the string
    return input;
}

// Function that counts the number of occurences 
// of a given char in a string using the standard library
void getCharCount(std::string& str, char c) {
    // Create a counter
    int count = 0;

    // Iterate over the string
    for (char& ch : str) {
        // Check if the current character is the one we are looking for
        if (ch == c) {
            // Increase the counter
            ++count;
        }
    }

    // Print the result
    std::cout << "The character " << c << " appears " << count << " times." << std::endl;
}

// Main function call
int main() {
    // Get the user input string
    std::string str = getUserInput();

    // Define the character to find
    char c = 'a';

    // Call the function
    getCharCount(str, c);
}

