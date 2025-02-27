#include <iostream>   // Include the iostream library for input and output
using namespace std;  // Use the standard namespace to avoid using std:: prefix
int pow(int m, int n) // Function to calculate power using optimized recursion (Exponential by Squaring)
{
    if (n == 0) // Base case: if exponent n is 0
    {
        return 1; // Return 1 (any number raised to the power of 0 is 1)
    }
    if (n % 2 == 0) // If exponent n is even
    {
        return pow(m * m, n / 2); // Recursive call with (m*m) and n/2
    }
    else // If exponent n is odd
    {
        return m * pow(m * m, (n - 1) / 2); // Recursive call with m*(m*m) and (n-1)/2
    }
}
int main()
{
    int x = 2, y = 9;          // Declare and initialize the base x and exponent y
    cout << pow(x, y) << endl; // Call the function pow with x and y, and print the result
    return 0;                  // Return 0 to indicate successful execution
}