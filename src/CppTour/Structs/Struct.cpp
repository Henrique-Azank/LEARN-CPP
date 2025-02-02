// Initial example of a struc (use defined types)
#include <iostream>

// Define a struct
struct Vector {
    // Define a pointer to a double
    double* elem;
    // Define the size of the vector
    int sz;
};

// Function to initialize a vector
void init_vector(Vector& v, int siz){
    // Append the reference to the vector
    v.elem = new double[siz];

    // Append the size of the vector
    v.sz = siz;
};

// Main function
int main(){
    // Initialize a vector
    Vector v;

    // Initialize the vector with a size of 10
    init_vector(v, 10);

    // Print the size of the vector and the reference
    std::cout << "The vector is initialized!: " << v.elem << std::endl;
    std::cout << "Size of the vector: " << v.sz << std::endl;
};




