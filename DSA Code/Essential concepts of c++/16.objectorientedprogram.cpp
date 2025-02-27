#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
class Rectangle
{
private:
    int length; // Declare an integer to store the length of the rectangle
    int breath; // Declare an integer to store the breadth of the rectangle
public:
    Rectangle(int l, int b) // Constructor to initialize the dimensions of the rectangle
    {
        length = l; // Set the length of the rectangle
        breath = b; // Set the breadth of the rectangle
    }
    int area() // Function to calculate the area of the rectangle
    {
        return length * breath; // Return the area (length * breadth)
    }
    int perimeter() // Function to calculate the perimeter of the rectangle
    {
        return 2 * (length + breath); // Return the perimeter (2 * (length + breadth))
    }
};
int main()
{
    Rectangle r(10, 20);                                                  // Declare and initialize a Rectangle object to store the length and breadth of the rectangle
    cout << "Area of the rectangle is :- " << r.area() << endl            // Output the area of the rectangle
         << "Perimeter of the rectangle is :- " << r.perimeter() << endl; // Output the perimeter of the rectangle
    return 0;                                                             // Return 0 to indicate successful execution
}