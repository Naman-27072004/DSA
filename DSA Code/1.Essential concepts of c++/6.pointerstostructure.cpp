#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
struct Rectangle
{
    int length; // Declare an integer to store the length of the rectangle
    int breath; // Declare an integer to store the breadth of the rectangle
};
int main()
{
    Rectangle *p = new Rectangle;                                      // Dynamically allocate memory for a Rectangle structure
    p->length = 1;                                                     // Assign 1 to the length of the rectangle
    p->breath = 2;                                                     // Assign 2 to the breadth of the rectangle
    cout << "the length of the rectangle is :- " << p->length << endl; // Output the length and breadth of the rectangle
    cout << "the breath of the rectangle is :- " << p->breath << endl;
    delete p;
    return 0; // Return 0 to indicate successful execution
}