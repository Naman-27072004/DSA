#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
int *fun(int size)   // Function to dynamically allocate an array and return the pointer
{
    int *p;                        // Declare an integer pointer 'p'
    p = new int[size];             // Allocate memory for an array of integers of given size
    for (int i = 0; i < size; i++) // Loop through the array
        p[i] = i + 1;              // Initialize each element of the array with value 'i + 1'
    return p;                      // Return the pointer to the array
}
int main()
{
    int *ptr, sz = 5;                                                      // Declare an integer pointer 'ptr' and an integer 'sz' with value 5
    ptr = fun(sz);                                                         // Call the 'fun' function with 'sz' and assign the returned pointer to 'ptr'
    for (int i = 0; i < sz; i++)                                           // Loop through the array using the pointer 'ptr'
        cout << i + 1 << " element of the array is :- " << ptr[i] << endl; // Output each element of the array
    delete[] ptr;
    return 0; // Return 0 to indicate successful execution
}