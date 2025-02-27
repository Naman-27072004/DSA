#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
struct Rectangle
{
    int length; // Declare an integer to store the length of the rectangle
    int breath; // Declare an integer to store the breadth of the rectangle
};
struct Rectangle *fun() // Function to create a Rectangle structure dynamically and return its pointer
{
    struct Rectangle *p; // Declare a pointer to a Rectangle structure
    p = new Rectangle;   // Dynamically allocate memory for a Rectangle structure
    p->length = 15;      // Set the length of the rectangle to 15
    p->breath = 7;       // Set the breadth of the rectangle to 7
    return p;            // Return the pointer to the Rectangle structure
}
int main()
{
    struct Rectangle *ptr = fun();                                  // Call the 'fun' function and assign the returned pointer to 'ptr'
    cout << "Length of the rectangle is :- " << ptr->length << endl // Print the dimensions of the rectangle
         << "Breath of the rectangle is :- " << ptr->breath << endl;
    return 0; // Return 0 to indicate successful execution
}
