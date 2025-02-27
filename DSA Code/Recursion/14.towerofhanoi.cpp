#include <iostream>                  // Include the iostream library for input and output
using namespace std;                 // Use the standard namespace to avoid using std:: prefix
void TOH(int n, int a, int b, int c) // Function to solve the Tower of Hanoi problem
{
    if (n > 0) // Base case: if there are disks to move
    {
        TOH(n - 1, a, c, b);        // Move (n-1) disks from tower 'a' to tower 'b' using 'c' as auxiliary
        cout << "Disk number " << n // Move the nth disk from tower 'a' to tower 'c'
             << " is moving from tower number " << a
             << " to tower number " << c
             << endl;
        TOH(n - 1, b, a, c); // Move (n-1) disks from tower 'b' to tower 'c' using 'a' as auxiliary
    }
}
int main()
{
    TOH(3, 1, 2, 3); // Solve the Tower of Hanoi problem for 3 disks
    return 0;        // Return 0 to indicate successful execution
}