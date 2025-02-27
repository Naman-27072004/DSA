#include <iostream>
using namespace std;
int main()
{
    int **a;
    a = new int *[3];
    a[0] = new int[4];
    a[1] = new int[4];
    a[2] = new int[4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            a[i][j] = i + j;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "element " << j + 1 << " of " << "array " << i + 1 << " is :- " << a[i][j] << endl;
        }
    }
    return 0;
}