#include <iostream>    // Include the iostream library for input and output
using namespace std;   // Use the standard namespace to avoid using std:: prefix
double e(int x, int n) // Function to calculate the value of e^x using recursion (Taylor Series)
{
    static double p = 1, f = 1; // Static variables to hold the power (p) and factorial (f) values
    double r;                   // Variable to store the result of the recursive call
    if (n == 0)                 // Base case: if n is 0
    {
        return 1; // Return 1 (since e^x when n is 0 is 1)
    }
    else
    {
        r = e(x, n - 1);  // Recursive call with n-1
        p = p * x;        // Update the power value (p)
        f = f * n;        // Update the factorial value (f)
        return r + p / f; // Return the sum of the current term and the previous terms
    }
}
int main()
{
    cout << e(1, 4) << endl; // Calculate and print the value of e^1 using 4 terms of the Taylor series
    return 0;                // Return 0 to indicate successful execution
}
