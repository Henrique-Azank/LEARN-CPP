// Example of accessing a struct member via a pointer

// Base dependencies
#include <iostream>
#include <string>

// Define a struct
struct Person {
    // Define a name string
    std::string name;
    // Define the age of the person
    int age;
    // Define a pointer to a relative
    Person* relative;
}; 

// Main function 
int main(){
    // Initialize a person
    Person p;

    // Create an age for the person
    p.age = 30;

    // Create a name for the person
    std::string name = "John";
    p.name = name;

    // Create a pointer to the person
    Person* personPointer = &p;

    // Print the name of the person via the pointer
    std::cout << "Name of the person (via the pointer): " << personPointer->name << std::endl;

    // Print the age of the person via the pointer
    std::cout << "Age of the person (via the pointer): " << personPointer->age << std::endl;

    // Create a relative for the person
    Person someRelative;

    // Create a name for the relative
    std::string relativeName = "Jane";
    someRelative.name = relativeName;

    // Create an age for the relative
    someRelative.age = 25;

    // Append the relative to the person via the member pointer
    p.relative = &someRelative;

    // Get the relative's name via the person pointer
    std::cout << "Name of the relative (via the person pointer): " << personPointer->relative->name << std::endl;

    // Get the relative's age via the person pointer
    std::cout << "Age of the relative (via the person pointer): " << personPointer->relative->age << std::endl;
};
