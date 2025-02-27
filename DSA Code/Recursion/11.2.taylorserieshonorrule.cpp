#include <iostream>          // Include the iostream library for input and output
using namespace std;         // Use the standard namespace to avoid using std:: prefix
double e(double x, double n) // Function to calculate the value of e^x using recursion (Horner's Rule)
{
    static double s = 1; // Static variable to hold the result
    if (n == 0)          // Base case: if n is 0
    {
        return s; // Return the current result
    }
    s = 1 + x / n * s;  // Update the result using Horner's Rule
    return e(x, n - 1); // Recursive call with n-1
}
int main()
{
    cout << e(1, 4) << endl; // Calculate and print the value of e^1 using 4 terms of the Taylor series
    return 0;                // Return 0 to indicate successful execution
}