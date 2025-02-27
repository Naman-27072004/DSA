#include <iostream>       // Include the iostream library for input and output
using namespace std;      // Use the standard namespace to avoid using std:: prefix
void swap(int *x, int *y) // Function to swap the values of two integers
{
    int temp;  // Declare a temporary variable to hold the value during the swap
    temp = *x; // Store the value pointed to by 'x' in 'temp'
    *x = *y;   // Assign the value pointed to by 'y' to the location pointed to by 'x'
    *y = temp; // Assign the value stored in 'temp' to the location pointed to by 'y'
}
int main()
{
    int num1 = 1, num2 = 2;           // Declare and initialize two integers 'num1' and 'num2'
    cout << "before swapping" << endl // Output the values of 'num1' and 'num2' before swapping
         << "the value of 1st number is :- " << num1 << endl
         << "the value of 2nd number is :- " << num2 << endl
         << endl;

    swap(&num1, &num2);              // Call the 'swap' function to swap the values of 'num1' and 'num2'
    cout << "after swapping" << endl // Output the values of 'num1' and 'num2' after swapping
         << "the value of 1st number is :- " << num1 << endl
         << "the value of 2nd number is :- " << num2 << endl;
    return 0; // Return 0 to indicate successful execution
}