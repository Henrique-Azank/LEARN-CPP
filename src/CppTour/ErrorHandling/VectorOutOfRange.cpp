/**
 * Example of a user trying to access an element outside of the vector's range.
 * How to handle this kind and all kinds of unexpected errors in Cpp ?
 */

// Base dependencies
#include <iostream>

// Vector implementation
// This class is a simple vector implementation that stores integers.
class Vector {

    // Public members
    public:
        // Constructor
        Vector(int size) : size(size), data(new int[size]) {}

        // Destructor
        ~Vector() {
            delete[] data;
        }

        // Since in this example, the created vector class has a fixed 
        // size, we cannot get or set elements outside of the vector's range.
        // It is in our best interest to throw an exception if the user tries to do so.

        // Get element at index
        int get(int index) {

            // If the index is out of range, throw an exception
            if (index < 0 || index >= size) {
                throw std::out_of_range("Index out of range");
            }

            // Returns a value
            return data[index];
        }

        // Set element at index
        void set(int index, int value) {

            // If the index is out of range, throw an exception
            // (Since the memory is allocated, we can't allocate 
            // more memory to a place that does not belong to the vector)
            if (index < 0 || index >= size) {
                throw std::out_of_range("Index out of range");
            }

            // Set the value
            data[index] = value;
        }

    // Private members
    private:
        int size;
        int* data;

};

// Function to fetch the user's desired element from the command line
int selectIndex(){
    // Print the message 
    std::cout << "Please enter the index of the element you want to fetch: ";

    // Initialize the index
    int index;

    // Fetch the index from the user
    std::cin >> index;

    // Return the index
    return index;
}

// Main function
int main(){

    // Using the standard namespace
    using namespace std;

    // Create a vector of size 3
    Vector v(3);

    // Set the first element to 10
    v.set(0, 10);

    // Get the index from the user
    int index = selectIndex();

    // Try to access the fourth element
    try {
        // Try to fetch the fourth element
        cout << v.get(index) << endl;

    // Specify the exception to catch
    } catch (const out_of_range& e) {
        // Catch the exception and print the error
        cerr << "Error: " << e.what() << endl;
    }

    // Return the main process
    return 0;
};




