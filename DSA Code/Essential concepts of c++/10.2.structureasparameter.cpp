#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
struct Rectangle
{
    int length; // Declare an integer to store the length of the rectangle
    int breath; // Declare an integer to store the breadth of the rectangle
};
void fun(struct Rectangle *p) // Function to modify the length of the rectangle and print its dimensions
{
    p->length = 20; // Modify the length of the rectangle using the pointer
    cout << "Length of the rectangle is :- " << p->length << endl
         << "Breath of the rectangle is :- " << p->breath << endl; // Print the dimensions of the rectangle inside the function
}
int main()
{
    struct Rectangle r = {10, 5};                                // Initialize a Rectangle structure with length 10 and breadth 5
    fun(&r);                                                     // Call the 'fun' function with the address of the Rectangle structure 'r'
    cout << "Length of the rectangle is :- " << r.length << endl // Print the dimensions of the rectangle after calling the function
         << "Breath of the rectangle is :- " << r.breath << endl;
    return 0; // Return 0 to indicate successful execution
}