#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
int main()
{
    int A[5] = {1, 2, 3, 4, 5}; // Declare an array of 5 integers
    for (int x : A)             // Loop through the array and print each element
    {
        cout << x << endl;
    }
    return 0; // Return 0 to indicate successful execution
}