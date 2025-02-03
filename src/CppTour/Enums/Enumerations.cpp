// Base dependencies
#include <iostream>

// Define an enumeration
enum class Traffic_Light { red, green, blue };

// Overloading the ++ operator
Traffic_Light& operator++(Traffic_Light& t) {

    // According to the current state, switch to the next one
    switch (t) {
        case Traffic_Light::red: 
            return t = Traffic_Light::green;
        case Traffic_Light::green: 
            return t = Traffic_Light::blue;
        case Traffic_Light::blue: 
            return t = Traffic_Light::red;
        default: 
            return t = Traffic_Light::red;
    };
};

// Main function
int main(){
    // Instantiate a new color
    Traffic_Light light = Traffic_Light::red;

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
