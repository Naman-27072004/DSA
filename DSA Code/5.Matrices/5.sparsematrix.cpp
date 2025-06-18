#include <iostream> // Include input-output stream for I/O operations
using namespace std;

// Structure representing one non-zero element in the sparse matrix
struct Element
{
    int i; // Row index
    int j; // Column index
    int x; // Value at position (i, j)
};

// Structure representing the sparse matrix
struct Sparse
{
    int m;      // Number of rows
    int n;      // Number of columns
    int num;    // Number of non-zero elements
    Element *e; // Dynamic array of non-zero elements
};

// Function to create a sparse matrix
void create(struct Sparse *s)
{
    cout << "Enter Dimension m :- ";
    cin >> s->m;

    cout << "Enter Dimension n :- ";
    cin >> s->n;

    cout << "Enter The Number of Non-zero Elements:- ";
    cin >> s->num;

    // Allocate memory for the array of elements
    s->e = new Element[s->num];

    cout << "Enter all Elements\n";
    for (int i = 0; i < s->num; i++)
    {
        cout << "Enter Row number :- ";
        cin >> s->e[i].i;
        cout << "Enter Column number :- ";
        cin >> s->e[i].j;
        cout << "Enter Element :- ";
        cin >> s->e[i].x;
    }
}

// Function to display the sparse matrix in its 2D form
void display(struct Sparse s)
{
    int i, j, k = 0;

    for (i = 0; i < s.m; i++)
    {
        for (j = 0; j < s.n; j++)
        {
            // Check if current position has a non-zero element
            if (k < s.num && i == s.e[k].i && j == s.e[k].j)
                cout << s.e[k++].x << " ";
            else
                cout << "0 ";
        }
        cout << "\n";
    }
}

// Function to add two sparse matrices
struct Sparse *add(struct Sparse *s1, struct Sparse *s2)
{
    // Return null if dimensions do not match
    if (s1->m != s2->m || s1->n != s2->n)
        return 0;

    struct Sparse *sum = new Sparse;
    sum->m = s1->m;
    sum->n = s1->n;
    sum->e = new Element[s1->num + s2->num];

    int i = 0, j = 0, k = 0;

    // Merge the two lists of non-zero elements in sorted order
    while (i < s1->num && j < s2->num)
    {
        if (s1->e[i].i < s2->e[j].i)
            sum->e[k++] = s1->e[i++];
        else if (s1->e[i].i > s2->e[j].i)
            sum->e[k++] = s2->e[j++];
        else
        {
            if (s1->e[i].j < s2->e[j].j)
                sum->e[k++] = s1->e[i++];
            else if (s1->e[i].j > s2->e[j].j)
                sum->e[k++] = s2->e[j++];
            else
            {
                sum->e[k] = s1->e[i];
                sum->e[k++].x = s1->e[i++].x + s2->e[j++].x;
            }
        }
    }

    // Copy remaining elements from s1
    for (; i < s1->num; i++)
        sum->e[k++] = s1->e[i];

    // Copy remaining elements from s2
    for (; j < s2->num; j++)
        sum->e[k++] = s2->e[j];

    sum->num = k; // Update the number of non-zero elements in the result

    return sum;
}

int main()
{
    struct Sparse s1, s2, *s3;

    // Create two sparse matrices
    create(&s1);
    create(&s2);

    // Add the matrices
    s3 = add(&s1, &s2);

    // Display all three matrices
    cout << "First Matrix\n";
    display(s1);

    cout << "Second Matrix\n";
    display(s2);

    cout << "Sum Matrix\n";
    display(*s3);

    return 0;
}