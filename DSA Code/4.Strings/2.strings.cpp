#include <iostream>
using namespace std;
int length(string str)
{
    int n = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        n = i;
    }

    return n + 1;
}
void change_case(string str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
        else
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;
}
void count(string str)
{
    int count_w = 0, count_c = 0, count_v = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            count_w++;
        }
        else if (str[i] != 65 && str[i] != 69 && str[i] != 73 && str[i] != 79 && str[i] != 85 && str[i] != 97 && str[i] != 101 && str[i] != 105 && str[i] != 111 && str[i] != 117)
        {
            count_c++;
        }
        else
        {
            count_v++;
        }
    }
    cout << "number of words in a string :- " << count_w + 1 << endl;
    cout << "number of consonents in a string :- " << count_c << endl;
    cout << "number of vowels in a string :- " << count_v << endl;
}
void validate(string str)
{
    int res;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
        {
            res = 1;
        }
        else
        {
            res = 0;
        }
    }
    if (res == 1)
    {
        cout << "It is a valid string" << endl;
    }
    else
    {
        cout << "It is not a valid string" << endl;
    }
}
void reverse(string str)
{
    int res;
    res = length(str);
    for (int i = 0, j = res - 1; i <= j; i++, j--)
    {
        int temp;
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }
    cout << str << endl;
}
// void palindrome(string str)
// {
//     int res;
//     res = length(str);
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] >= 65 && str[i] <= 90)
//         {
//             str[i] += 32;
//         }
//     }
//     int n;
//     for (int i = 0, j = res - 1; i <= j; i++, j--)
//     {
//         if (str[i] != str[j])
//         {
//             n = 0;
//         }
//         else
//         {
//             n = 1;
//         }
//     }
//     if (n == 1)
//     {
//         cout << "It is a palindrome" << endl;
//     }
//     else
//     {
//         cout << "It is not a palindrome" << endl;
//     }
// }
int main()
{
    string str;
    cout << "Enter a string :- ";
    getline(cin, str);
    // cout << str;
    int n = 0;
    while (n != 6)
    {
        cout << "1. Find the length of the string." << endl
             << "2. Changing case of each word." << endl
             << "3. Count the number of words, consonents and vowels." << endl
             << "4. Validate a string." << endl
             << "5. Reverse a string." << endl
            //  << "6. Check if a string is a palindrome." << endl
             << "6. Exit the menu." << endl;
        cout << "which operation do you want to perform :- ";
        cin >> n;
        switch (n)
        {
        case 1:
            int res;
            res = length(str);
            cout << "The length of the string :- " << res << endl;
            break;
        case 2:
            change_case(str);
            break;
        case 3:
            count(str);
            break;
        case 4:
            validate(str);
            break;
        case 5:
            reverse(str);
            break;
        // case 6:
        //     palindrome(str);
        //     break;
        default:
            cout << "Thanks for using this program";
            break;
        }
    }
    return 0;
}

// palindrome
// duplicates
// permution

// two strings concept
// comparing
// greater
// lesser
// anagram

// bitwise operation (left shift,merging,masking)
// using the hashtable or counting
// dulicates bitwise