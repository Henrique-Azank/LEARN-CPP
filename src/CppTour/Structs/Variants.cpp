
// Although unions are really useful, they can be dangerous if not used properly.
// It is generally a good idea to use unions while controlling the type of data that 
// is being stored with member methods of a class. 

// Another way to make unions safer is to use Variants (standard library). 

// Base dependencies
#include <iostream>
#include <variant>

// Enumeration of type
enum class Type_of_character { hero, villain, neutral };

// Create a struct to store the character's type and value
struct Character {
    Type_of_character type;
    // If it is a hero, we store the hero's name
    // If it is a villain, we store the villain's hp points (int)
    // If it is a neutral character, we store a boolean value
    std::variant<char[20], int, bool> value;
};

// Function to log the character's information
// (Approach using std::variant)
struct log_char {
    // Overload the operator for each type of the variant

    // Hero name
    void operator()(const std::string& name) const {
        std::cout << "Hero: " << name << std::endl;
    }

    // Villain hp
    void operator()(int hp) const {
        std::cout << "Villain: " << hp << " HP" << std::endl;
    }

    // Neutral character status
    void operator()(bool is_neutral) const {
        std::cout << "Neutral: " << std::boolalpha << is_neutral << std::endl;
    }
};

// Main function
int main(){

    // Instantiate a new character with the "netral" type
    Character character = { Type_of_character::neutral, true };

    // Print the character's information
    // (The visitor function applies the correct function overload
    // based on the type of the variant provided -> useful for when
    // we have multiple types in the variant and we don't know its type)
    std::visit(log_char{}, character.value);

    // Return the function
    return 0;
}





