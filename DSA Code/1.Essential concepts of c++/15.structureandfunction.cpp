#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
struct Rectangle
{
    int length; // Declare an integer to store the length of the rectangle
    int breath; // Declare an integer to store the breadth of the rectangle
};
void initialize(struct Rectangle *r, int l, int b) // Function to initialize the dimensions of the rectangle
{
    r->length = l; // Set the length of the rectangle
    r->breath = b; // Set the breadth of the rectangle
}
int area(struct Rectangle r) // Function to calculate the area of the rectangle
{
    return r.length * r.breath; // Return the area (length * breadth)
}
int perimeter(struct Rectangle r) // Function to calculate the perimeter of the rectangle
{
    return 2 * (r.length + r.breath); // Return the perimeter (2 * (length + breadth))
}
int main()
{
    Rectangle r = {0, 0};                                                // Declare and initialize a Rectangle structure to store the length and breadth of the rectangle
    int l, b;                                                            // Declare variables to store the length and breadth of the rectangle
    cout << "Enter the length of the rectangle :- ";                     // Prompt the user to enter the length of the rectangle
    cin >> l;                                                            // Read the length from the user input
    cout << "Enter the breath of the rectangle :- ";                     // Prompt the user to enter the breadth of the rectangle
    cin >> b;                                                            // Read the breadth from the user input
    initialize(&r, l, b);                                                // Initialize the rectangle with the entered length and breadth
    cout << "Area of the rectangle is :- " << area(r) << endl            // Output the area of the rectangle
         << "Perimeter of the rectangle is :- " << perimeter(r) << endl; // Output the perimeter of the rectangle
    return 0;                                                            // Return 0 to indicate successful execution
}