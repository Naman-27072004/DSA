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
    void changelength(int l) // Function to change the length of the rectangle
    {
        length = l; // Modify the length of the rectangle
    }
    int getLength() const // Function to get the length of the rectangle
    {
        return length;
    }
    int getBreath() const // Function to get the breadth of the rectangle
    {
        return breath;
    }
};
int main()
{
    Rectangle r(10, 5);                                                        // Declare a Rectangle object and initialize it with length 10 and breadth 5
    cout << "Area of the rectangle is :- " << r.area() << endl;                // Calculate and print the area of the rectangle
    r.changelength(20);                                                        // Change the length of the rectangle to 20
    cout << "Modified length of the rectangle is :- " << r.getLength() << endl // Print the modified dimensions of the rectangle
         << "Breath of the rectangle is :- " << r.getBreath() << endl;
    return 0; // Return 0 to indicate successful execution
}