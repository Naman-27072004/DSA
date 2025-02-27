#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
struct Rectangle
{
    int length; // Declare an integer to store the length of the rectangle
    int breath; // Declare an integer to store the breadth of the rectangle
};
int main()
{
    Rectangle r = {1, 2};                                              // Initialize a Rectangle structure with length 1 and breadth 2
    cout << "Area of Rectangle is :- " << r.length * r.breath << endl; // Print the area of the rectangle
    return 0;                                                          // Return 0 to indicate successful execution
}