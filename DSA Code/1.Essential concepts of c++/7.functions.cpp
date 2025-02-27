#include <iostream>   // Include the iostream library for input and output
using namespace std;  // Use the standard namespace to avoid using std:: prefix
int add(int a, int b) // Function to add two integers and return the result
{
    int c;     // Declare an integer variable 'c' to store the sum
    c = a + b; // Calculate the sum of 'a' and 'b'
    return c;  // Return the sum
}
int main()
{
    int num1 = 1, num2 = 2, sum;                        // Declare and initialize two integers 'num1' and 'num2'; declare an integer 'sum' to store the result
    sum = add(num1, num2);                              // Call the 'add' function with 'num1' and 'num2' and store the result in 'sum'
    cout << "sum of two numbers is :- " << sum << endl; // Output the sum of the two numbers
    return 0;                                           // Return 0 to indicate successful execution
}