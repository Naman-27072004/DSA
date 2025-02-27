#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
void fun(int n)      // Function to print numbers from n to 1 using recursion
{
    if (n > 0) // Check if n is greater than 0
    {
        fun(n - 1);        // Recursive call to the function with n-1
        cout << n << endl; // Print the current value of n
    }
}
int main()
{
    int x = 3; // Declare and initialize the variable x with value 3
    fun(x);    // Call the function fun with x
    return 0;  // Return 0 to indicate successful execution
}