
// If we wish to optimize the use of memory, we can use the union keyword.
// Unions are similar to structures, but they share the same memory space for all their members.
// They are used when we have cases where we need to store only one value at a time, so the overall
// memory usage is reduced.

// Base dependencies
#include <iostream>

// Enumeration of type
enum class Type_of_character { hero, villain, neutral };

// Create a union to store the character's information

// If it is a hero, we store the hero's name
// If it is a villain, we store the villain's hp points (int)
// If it is a neutral character, we store a boolean value
union Type_value{
    char hero_name[20];
    int villain_hp;
    bool is_neutral;
};  

// Create a struct to store the character's type and value
struct Character {
    Type_of_character type;
    Type_value value;
};

// Function that takes a character struct and logs its information
void log_char(Character& c){

    // Using the enumeration
    using enum Type_of_character;

    // Switch the character type
    switch(c.type){

        // If it is a hero, print his name
        case hero:
            std::cout << "Hero name: " << c.value.hero_name << std::endl;
            break;

        // If it is a villain, print his hp points
        case villain:
            std::cout << "Villain hp: " << c.value.villain_hp << std::endl;
            break;

        // If it is a neutral character, print a message
        case neutral:
            std::cout << "Neutral character" << std::endl;
            break;
    };

};

// Main function
int main(){

    // Instantiate a new character with the "netral" type
    Character character = { Type_of_character::neutral, { .is_neutral = true } };

    // Print the character's information
    log_char(character);

    // Return the function
    return 0;
}





