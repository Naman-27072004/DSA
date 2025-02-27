#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
class Rectangle
{
private:
    int length; // Declare an integer to store the length of the rectangle
    int breath; // Declare an integer to store the breadth of the rectangle
public:
    Rectangle();             // Default constructor
    Rectangle(int l, int b); // Parameterized constructor to initialize the dimensions of the rectangle
    int area();              // Function to calculate the area of the rectangle
    int perimeter();         // Function to calculate the perimeter of the rectangle
    int getlength();         // Function to get the length of the rectangle
    int getbreath();         // Function to get the breadth of the rectangle
    int setlength(int l);    // Function to set the length of the rectangle
    int setbreath(int b);    // Function to set the breadth of the rectangle
    ~Rectangle();            // Destructor
};
Rectangle::Rectangle(int l, int b) // Definition of the parameterized constructor
{
    length = l;
    breath = b;
}
int Rectangle::area() // Function to calculate the area of the rectangle
{
    return length * breath;
}
int Rectangle::perimeter() // Function to calculate the perimeter of the rectangle
{
    return 2 * (length + breath);
}
int Rectangle::getlength() // Function to get the length of the rectangle
{
    return length;
}
int Rectangle::getbreath() // Function to get the breadth of the rectangle
{
    return breath;
}
int Rectangle::setlength(int l) // Function to set the length of the rectangle
{
    length = l;
    return 0;
}
int Rectangle::setbreath(int b) // Function to set the breadth of the rectangle
{
    breath = b;
    return 0;
}
Rectangle::~Rectangle() // Definition of the destructor
{
    cout << "Destructor has done its execution" << endl;
}
int main()
{
    Rectangle r(10, 20);                                                  // Declare and initialize a Rectangle object with length 10 and breadth 20
    cout << "Length of the rectangle is :- " << r.getlength() << endl     // Output the length of the rectangle
         << "Breath of the rectangle is :- " << r.getbreath() << endl     // Output the breadth of the rectangle
         << "Area of the rectangle is :- " << r.area() << endl            // Output the area of the rectangle
         << "Perimeter of the rectangle is :- " << r.perimeter() << endl; // Output the perimeter of the rectangle
    return 0;                                                             // Return 0 to indicate successful execution
}