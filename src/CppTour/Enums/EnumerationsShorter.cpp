
// Shorter version of the enumeration example
// using the enumation as a namespace for shorter notation

// Base dependencies
#include <iostream>

// Define an enumeration
enum class Trafic_light { red, green, blue };

// Overloading the ++ operator
Trafic_light& operator++(Trafic_light& t) {

    // Use the enumation as a namespace
    using enum Trafic_light;

    // According to the current state, switch to the next one
    switch (t) {
        case red: 
            return t = green;
        case green: 
            return t = blue;
        case blue: 
            return t = red;
        default: 
            return t = red;
    };
};

// Main function
int main(){
    // Instantiate a new color
    Trafic_light light = Trafic_light::red;

    // Log the current color
    // (static_cast is safer than the C style int casting)
    std::cout << "Current color: " << static_cast<int>(light) << std::endl;

    // Increment the current color
    ++light;

    // Log the new color
    std::cout << "New color: " << static_cast<int>(light) << std::endl;

    // Increment the current color 3 times
    ++light; ++light; ++light;

    // Log the new color
    std::cout << "New color (looped): " << static_cast<int>(light) << std::endl;

    // Return the function
    return 0;
};
