// GEOMETRIC PROGRESSION WAS DISCUSSED HERE
#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
void fun(int n)      // Function to demonstrate a binary tree recursion
{
    if (n > 0) // Check if n is greater than 0
    {
        cout << n << endl; // Print the current value of n
        fun(n - 1);        // First recursive call with n-1
        fun(n - 1);        // Second recursive call with n-1
    }
}
int main()
{
    int x = 3; // Declare and initialize the variable x with value 3
    fun(x);    // Call the function fun with x
    return 0;  // Return 0 to indicate successful execution
}