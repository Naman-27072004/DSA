#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
int f[10];           // Array to store the Fibonacci numbers and for memoization
int fib(int n)       // Function to calculate Fibonacci numbers using memoization
{
    if (n <= 1) // Base case: if n is 0 or 1
    {
        f[n] = n; // Store the Fibonacci number in the array
        return n; // Return n
    }
    else
    {
        if (f[n - 2] == -1) // Check if the value is already calculated
        {
            f[n - 2] = fib(n - 2); // Recursive call and store the result
        }
        if (f[n - 1] == -1) // Check if the value is already calculated
        {
            f[n - 1] = fib(n - 1); // Recursive call and store the result
        }
        return f[n - 2] + f[n - 1]; // Return the sum of the two previous Fibonacci numbers
    }
}
int main()
{
    for (int i = 0; i < 10; i++) // Initialize the memoization array with -1
    {
        f[i] = -1;
    }
    cout << fib(10) << endl; // Calculate and print the 10th Fibonacci number
    return 0;                // Return 0 to indicate successful execution
}