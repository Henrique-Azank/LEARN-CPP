// Base dependencies
#include <iostream>

// Define a vector class
class Vector {

    // Public members
    public:
        // Constructor
        Vector(int s) : elem{new double[s]}, sz{s} {}

        // Destructor
        ~Vector() { delete[] elem; }

        // Accessor
        double& operator[](int i) { return elem[i]; }

        // Return the size of the vector
        int size() { return sz; }

    // Private members
    private:
        // Pointer to the first element
        double* elem;

        // Size of the vector
        int sz;
};

// Main function 
int main(){

    // Instantiate a vector
    Vector v(6);

    // Log its size
    std::cout << "Vector size: " << v.size() << std::endl;

    // Return the function
    return 0;
}



