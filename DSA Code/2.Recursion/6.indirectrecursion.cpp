#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
void funA(int n);    // Function to demonstrate indirect recursion with funB
void funB(int n)     // Function to demonstrate indirect recursion with funA

{
    if (n > 1) // Check if n is greater than 1
    {
        cout << "funB: " << n << endl; // Print the current value of n
        funA(n / 2);                   // Call funA with n/2
    }
}
void funA(int n) // Function to demonstrate indirect recursion with funB
{
    if (n > 0) // Check if n is greater than 0
    {
        cout << "funA: " << n << endl; // Print the current value of n
        funB(n - 1);                   // Call funB with n-1
    }
}
int main()
{
    int x = 20; // Declare and initialize the variable x with value 20
    funA(x);    // Call the function funA with x
    return 0;   // Return 0 to indicate successful execution
}