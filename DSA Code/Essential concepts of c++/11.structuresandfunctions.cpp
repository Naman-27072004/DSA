#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
struct Rectangle
{
    int length; // Declare an integer to store the length of the rectangle
    int breath; // Declare an integer to store the breadth of the rectangle
};
void initialize(struct Rectangle *p, int l, int b) // Function to initialize the dimensions of the rectangle
{
    p->length = l; // Set the length of the rectangle
    p->breath = b; // Set the breadth of the rectangle
}
int area(struct Rectangle r) // Function to calculate the area of the rectangle
{
    return r.length * r.breath; // Return the area (length * breadth)
}
void changelength(struct Rectangle *p, int l) // Function to change the length of the rectangle
{
    p->length = l; // Modify the length of the rectangle
}
int main()
{
    struct Rectangle r;                                                   // Declare a Rectangle structure
    initialize(&r, 10, 5);                                                // Initialize the rectangle with length 10 and breadth 5
    cout << "Area of the rectangle is :- " << area(r) << endl;            // Calculate and print the area of the rectangle
    changelength(&r, 20);                                                 // Change the length of the rectangle to 20
    cout << "Modified length of the rectangle is :- " << r.length << endl // Print the modified dimensions of the rectangle
         << "Breath of the rectangle is :- " << r.breath << endl;
    return 0; // Return 0 to indicate successful execution
}