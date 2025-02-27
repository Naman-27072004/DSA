#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
int main()
{
    int *p = new int[5];        // Dynamically allocate an array of 5 integers
    p[0] = 1;                   // Assign 1 to the first element
    p[1] = 2;                   // Assign 2 to the second element
    p[2] = 3;                   // Assign 3 to the third element
    p[3] = 4;                   // Assign 4 to the fourth element
    p[4] = 5;                   // Assign 5 to the fifth element
    for (int i = 0; i < 5; i++) // Loop through the array and print each element
    {
        cout << i + 1 << " element of array is :- " << p[i] << endl;
    }
    delete[] p; // Deallocate the memory for the array
    return 0;   // Return 0 to indicate successful execution
}