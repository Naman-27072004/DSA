#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
int main()
{
    int length = 0, breath = 0;                               // Declare and initialize variables to store the length and breadth of the rectangle
    cout << "Enter the length of the rectangle :- ";          // Prompt the user to enter the length of the rectangle
    cin >> length;                                            // Read the length from the user input
    cout << "Enter the breath of the rectangle :- ";          // Prompt the user to enter the breadth of the rectangle
    cin >> breath;                                            // Read the breadth from the user input
    int area = length * breath;                               // Calculate the area of the rectangle
    int perimeter = 2 * (length + breath);                    // Calculate the perimeter of the rectangle
    cout << "Area of the rectangle is :- " << area << endl    // Output the area of the rectangle
         << "perimeter of the rectangle is :- " << perimeter; // Output the perimeter of the rectangle
    return 0;                                                 // Return 0 to indicate successful execution
}