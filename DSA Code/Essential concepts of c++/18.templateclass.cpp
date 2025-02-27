#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
template <class T>   // Template class for arithmetic operations
class Arithmatic
{
private:
    T a; // Declare a variable to store the first number
    T b; // Declare a variable to store the second number
public:
    Arithmatic(T a, T b) // Constructor to initialize the variables
    {
        this->a = a; // Initialize 'a' with the value passed to the constructor
        this->b = b; // Initialize 'b' with the value passed to the constructor
    }
    T add() // Function to add the two numbers
    {
        T c;
        c = a + b; // Calculate the sum of 'a' and 'b'
        return c;  // Return the sum
    }
    T sub() // Function to subtract the second number from the first
    {
        T c;
        c = a - b; // Calculate the difference between 'a' and 'b'
        return c;  // Return the difference
    }
};
int main()
{
    Arithmatic<int> ar(1, 2);                                         // Create an object of the Arithmatic class with integer type and initialize it with 1 and 2
    cout << "Sum of two numbers :- " << ar.add() << endl;             // Output the sum of the two numbers
    cout << "Difference between two numbers :- " << ar.sub() << endl; // Output the difference between the two numbers
    return 0;                                                         // Return 0 to indicate successful execution
}