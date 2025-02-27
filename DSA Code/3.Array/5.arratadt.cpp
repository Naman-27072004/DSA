#include <iostream>
using namespace std;
struct Array
{
    int *a;
    int size;
    int length;
};
void display(struct Array arr)
{
    cout << "displaying the elements of the array :- " << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << "the element " << i + 1 << " of the array is :- " << arr.a[i] << endl;
    }
}
void append(struct Array *arr)
{
    if (arr->length >= arr->size)
    {
        cout << "Error: Array is full, cannot append more elements.\n";
        return;
    }
    int n;
    cout << "The number of elements you can add is: " << arr->size - arr->length << endl;
    do
    {
        cout << "How many elements do you want to add? ";
        cin >> n;
    } while (n > arr->size - arr->length || n <= 0);

    for (int i = arr->length; i < arr->length + n; i++)
    {
        cout << "Enter element " << i + 1 << " of the array: ";
        cin >> arr->a[i];
    }
    arr->length += n;
}

void insert(struct Array *arr)
{
    if (arr->length >= arr->size)
    {
        cout << "Error: No space to insert new element.\n";
        return;
    }
    int position, element;
    do
    {
        cout << "Enter the position (1 to " << arr->length + 1 << "): ";
        cin >> position;
    } while (position > arr->length + 1 || position <= 0);

    cout << "Enter the element to insert: ";
    cin >> element;

    for (int i = arr->length; i >= position; i--)
    {
        arr->a[i] = arr->a[i - 1];
    }
    arr->a[position - 1] = element;
    arr->length++;
}

void delete_1(struct Array *arr)
{
    int position;
    do
    {
        cout << "Enter the position to delete (1 to " << arr->length << "): ";
        cin >> position;
    } while (position > arr->length || position <= 0);

    for (int i = position - 1; i < arr->length - 1; i++)
    {
        arr->a[i] = arr->a[i + 1];
    }
    arr->length--;
}

void linear_search(struct Array arr)
{
    int key;
    cout << "Enter the element to find its index in array :- ";
    cin >> key;

    for (int i = 0; i < arr.length; i++)
    {
        if (arr.a[i] == key)
        {
            cout << arr.a[i] << " is at index :- " << i << endl;
            return;
        }
    }
    cout << "element does not exist in the array." << endl;
}
void binary_search(struct Array arr)
{
    int key;
    cout << "Enter the element to find its index in array: ";
    cin >> key;
    int l = 0, h = arr.length - 1, mid;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.a[mid])
        {
            cout << arr.a[mid] << " is at index: " << mid << endl;
            return;
        }
        else if (key < arr.a[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    cout << "Element does not exist in the array." << endl;
}

void get(struct Array arr)
{
    int index;
    do
    {
        cout << "Enter the index to retrieve (0 to " << arr.length - 1 << "): ";
        cin >> index;
    } while (index < 0 || index >= arr.length);
    cout << "Element at index " << index << " is: " << arr.a[index] << endl;
}
// unexpected output
void set(struct Array *arr)
{
    int index, element;
    do
    {
        cout << "Enter the index at which you want to set the element: ";
        cin >> index;
    } while (index < 0 || index >= arr->length);

    cout << "Enter the element: ";
    cin >> element;
    arr->a[index] = element;
}

void find_max(struct Array arr)
{
    int max;
    max = arr.a[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.a[i] > max)
        {
            max = arr.a[i];
        }
    }
    cout << "The value that is maximum in the array is :- " << max << endl;
}
void find_min(struct Array arr)
{
    int min = arr.a[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.a[i] < min)
        {
            min = arr.a[i];
        }
    }
    cout << "The value that is minimum in the array is: " << min << endl;
}

void sum(struct Array arr)
{
    int sum;
    sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum += arr.a[i];
    }
    cout << "Sum of all elements of the array is :- " << sum << endl;
}
void average(struct Array arr)
{
    float sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum += arr.a[i];
    }
    cout << "Average of elements: " << sum / arr.length << endl;
}

void reverse(struct Array *arr)
{
    for (int i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        swap(arr->a[i], arr->a[j]);
    }
    cout << "Array reversed successfully.\n";
}

void left_shift(struct Array *arr)
{
    for (int i = 0; i < arr->length - 1; i++)
    {
        arr->a[i] = arr->a[i + 1];
    }
    arr->length -= 1;
}
// unexpected output
void right_shift(struct Array *arr)
{
    if (arr->length == 0)
    {
        cout << "Array is empty, cannot shift.\n";
        return;
    }
    for (int i = arr->length - 1; i > 0; i--)
    {
        arr->a[i] = arr->a[i - 1];
    }
    arr->a[0] = 0; // Setting first element to zero
    arr->length--;
    cout << "Array right-shifted successfully.\n";
}

void left_rotate(struct Array *arr)
{
    int first = arr->a[0];
    for (int i = 0; i < arr->length - 1; i++)
    {
        arr->a[i] = arr->a[i + 1];
    }
    arr->a[arr->length - 1] = first;
}
void right_rotate(struct Array *arr)
{
    int last = arr->a[arr->length - 1];
    for (int i = arr->length - 1; i > 0; i--)
    {
        arr->a[i] = arr->a[i - 1];
    }
    arr->a[0] = last;
    cout << "Array right-rotated successfully.\n";
}
void check_sorted(struct Array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.a[i] > arr.a[i + 1])
        {
            cout << "Array is not sorted" << endl;
            return;
        }
    }
    cout << "Array is Sorted" << endl;
    return;
}

int main()
{
    struct Array arr;
    cout << "What size of array do you need :- ";
    cin >> arr.size;
    arr.a = new int[arr.size];
    cout << "enter the elements of the array :- " << endl;
    cout << "how many elements do you want to enter :- ";
    cin >> arr.length;
    for (int i = 0; i < arr.length; i++)
    {
        cout << "enter the element " << i + 1 << " of the array :- ";
        cin >> arr.a[i];
    }
    int n;
    n = 0;
    while (n != 19)
    {
        cout << "the operations you can perform on the array is :-" << endl
             << "1. display the elements of the array." << endl
             << "2. append the elements in the array." << endl
             << "3. insert an element at a given index." << endl
             << "4. delete an element at a given index." << endl
             << "5. Find index of an element(linear search)." << endl
             << "6. Find index of an element(binary search)." << endl
             << "7. Find element at an index." << endl
             << "8. Set element at an index." << endl
             << "9. Find the maximum element of array." << endl
             << "10. Find the minimum element of array." << endl
             << "11. Find the sum of element of array." << endl
             << "12. Find the average of element of array." << endl
             << "13. Reverse this array." << endl
             << "14. Left shift elements of array." << endl
             << "15. Right shift elements of array." << endl
             << "16. Left rotate elements of array." << endl
             << "17. Right rotate elements of array." << endl
             << "18. Check if array is sorted or not" << endl
             << "19. exit the menu." << endl;
        cout << "which operation do you want to perform :- ";
        cin >> n;
        switch (n)
        {
        case 1:
            display(arr);
            break;
        case 2:
            append(&arr);
            break;
        case 3:
            insert(&arr);
            break;
        case 4:
            delete_1(&arr);
            break;
        case 5:
            linear_search(arr);
            break;
        case 6:
            binary_search(arr);
            break;
        case 7:
            get(arr);
            break;
        case 8:
            set(&arr);
            break;
        case 9:
            find_max(arr);
            break;
        case 10:
            find_min(arr);
            break;
        case 11:
            sum(arr);
            break;
        case 12:
            average(arr);
            break;
        case 13:
            reverse(&arr);
            break;
        case 14:
            left_shift(&arr);
            break;
        case 15:
            right_shift(&arr);
            break;
        case 16:
            left_rotate(&arr);
            break;
        case 17:
            right_rotate(&arr);
            break;
        case 18:
            check_sorted(arr);
            break;
        default:
            cout << "Thanks for using this program";
        }
    }
    delete[] arr.a;
    return 0;
}

// inserting in the sorted array
// arranging all negative elements on the left side and vise versa

// two array topic
// merging two arrays
// set operations on array union,intersaction,difference,setmembership

// More student challenges
