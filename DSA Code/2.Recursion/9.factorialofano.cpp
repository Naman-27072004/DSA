#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix

// Function to calculate the factorial of a number using recursion
int fact(int n)
{
    if (n == 0) // Base case: if n is 0
    {
        return 1; // Return 1 (factorial of 0 is 1)
    }
    else
    {
        return fact(n - 1) * n; // Recursive call: factorial of (n-1) multiplied by n
    }
}

int main()
{
    int x; // Declare a variable to store the value of N

    // Prompt the user to enter the value of N
    cout << "Till which value of N do you want to calculate the factorial of N :- ";
    cin >> x; // Read the value of N from the user input

    // Call the function fact with x and print the result
    cout << "The factorial of " << x << " is: " << fact(x) << endl;

    return 0; // Return 0 to indicate successful execution
}
