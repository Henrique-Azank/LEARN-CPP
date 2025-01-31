# include <iostream>

/*
Initial program to test the compiler and the environment
with an input and output: Compute an integer double's
*/
int main(){

    // Instantiate the variable
    int value {0};

    // Ask the user for an integer
    std::cout << "Enter an integer: ";

    // Read the integer 
    // (Remember that the input buffer is flushed 
    // only until a valid flush value is given)
    std::cin >> value;

    // Compute the double
    int doubleValue {value * 2};

    // Output the double
    std::cout << "Double that number is: " << doubleValue << std::endl;

    // return a value to the OS
    return 0;
}