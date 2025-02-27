#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
int x = 0;           // Declare a global variable 'x' initialized to 0
int fun(int n)       // Function to demonstrate the use of a global variable in recursion
{
    if (n > 0) // Check if n is greater than 0
    {
        x++;                   // Increment the value of 'x'
        return fun(n - 1) + x; // Recursive call with n-1 and add the current value of 'x'
    }
    return 0; // Base case: return 0 when n is not greater than 0
}
int main()
{
    int a = 5;              // Declare and initialize the variable 'a' with value 5
    cout << fun(a) << endl; // Call the function 'fun' with 'a' and print the result
    return 0;               // Return 0 to indicate successful execution
}