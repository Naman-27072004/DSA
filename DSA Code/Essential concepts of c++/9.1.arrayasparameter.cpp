#include <iostream>     // Include the iostream library for input and output
using namespace std;    // Use the standard namespace to avoid using std:: prefix
void fun(int *A, int n) // Function to print the elements of an array
{
    for (int i = 0; i < n; i++) // Loop through the array
    {
        cout << i + 1 << " element of the array is :- " << A[i] << endl; // Output each element of the array
    }
}
int main()
{
    int A[] = {1, 2, 3, 4, 5}; // Declare and initialize an array of 5 integers
    int n = 5;                 // Declare and initialize an integer 'n' with the value 5
    fun(A, n);                 // Call the 'fun' function with array 'A' and its size 'n'
    return 0;                  // Return 0 to indicate successful execution
}