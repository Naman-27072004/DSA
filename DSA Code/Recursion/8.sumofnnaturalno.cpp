#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
int sum(int n)       // Function to calculate the sum of first N natural numbers using recursion
{
    if (n == 0) // Base case: if n is 0
    {
        return 0; // Return 0
    }
    else
    {
        return sum(n - 1) + n; // Recursive call: sum of first (n-1) natural numbers + n
    }
}
int main()
{
    int x;                                                                                           // Declare a variable to store the value of N
    cout << "Till which value of N do you want to calculate the sum of first N natural numbers :- "; // Prompt the user to enter the value of N
    cin >> x;                                                                                        // Read the value of N from the user input
    cout << "The sum of the first " << x << " natural numbers is: " << sum(x) << endl;               // Call the function sum with x and print the result
    return 0;                                                                                        // Return 0 to indicate successful execution
}