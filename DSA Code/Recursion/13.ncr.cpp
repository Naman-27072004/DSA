#include <iostream>   // Include the iostream library for input and output
using namespace std;  // Use the standard namespace to avoid using std:: prefix
int nCr(int n, int r) // Function to calculate nCr using recursion
{
    if (n == r || r == 0) // Base case: if n == r or r == 0
    {
        return 1; // Return 1
    }
    return nCr(n - 1, r - 1) + nCr(n - 1, r); // Recursive case: nCr(n, r) = nCr(n-1, r-1) + nCr(n-1, r)
}
int main()
{
    cout << nCr(5, 1) << endl; // Call the function nCr with n = 5 and r = 1, and print the result
    return 0;                  // Return 0 to indicate successful execution
}