#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
int fun(int n)       // Function to demonstrate nested recursion
{
    if (n > 100) // Base case: if n is greater than 100
    {
        return n - 10; // Return n - 10
    }
    else
    {
        return fun(fun(n + 11)); // Nested recursive call with n + 11
    }
}

int main()
{
    int x = 95;             // Declare and initialize the variable x with value 95
    cout << fun(x) << endl; // Call the function fun with x and print the result
    return 0;               // Return 0 to indicate successful execution
}
