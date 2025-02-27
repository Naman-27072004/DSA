#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
int main()
{
    int A[5] = {1, 2, 3, 4, 5}; // Declare an array of 5 integers and initialize it with values 1, 2, 3, 4, and 5
    int *p = A;                 // Declare an integer pointer 'p' and assign it the address of the first element of array 'A'
    for (int i = 0; i < 5; i++) // Loop through the array using the pointer 'p' and print each element
    {
        cout << i + 1 << " element of array is :- " << p[i] << endl;
    }
    return 0; // Return 0 to indicate successful execution
}