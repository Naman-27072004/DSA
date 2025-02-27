#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid using std:: prefix
int main()
{
    int a = 1;                                    // Declare an integer variable 'a' and initialize it with the value 1
    int &r = a;                                   // Declare a reference 'r' to the variable 'a'
    cout << "the value of a is :- " << r << endl; // Output the value of 'r', which is the value of 'a'
    return 0;                                     // Return 0 to indicate successful execution
}