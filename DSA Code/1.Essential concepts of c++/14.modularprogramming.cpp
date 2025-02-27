#include <iostream>              // Include the iostream library for input and output
using namespace std;             // Use the standard namespace to avoid using std:: prefix
int area(int length, int breath) // Function to calculate the area of the rectangle
{
    return length * breath; // Return the area (length * breadth)
}
int perimeter(int length, int breath) // Function to calculate the perimeter of the rectangle
{
    return 2 * (length + breath); // Return the perimeter (2 * (length + breadth))
}
int main()
{
    int length = 0, breath = 0;                                               // Declare and initialize variables to store the length and breadth of the rectangle
    cout << "Enter the length of the rectangle :- ";                          // Prompt the user to enter the length of the rectangle
    cin >> length;                                                            // Read the length from the user input
    cout << "Enter the breath of the rectangle :- ";                          // Prompt the user to enter the breadth of the rectangle
    cin >> breath;                                                            // Read the breadth from the user input
    cout << "Area of the rectangle is :- " << area(length, breath) << endl    // Output the area of the rectangle
         << "Perimeter of the rectangle is :- " << perimeter(length, breath); // Output the perimeter of the rectangle
    return 0;                                                                 // Return 0 to indicate successful execution
}