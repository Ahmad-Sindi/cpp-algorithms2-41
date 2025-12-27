/* Algorithm Challenge & Problem Solving
 * 41 - Check if an Array is Palindrome
 *
 * This program fills an integer array with predefined values, then checks whether the array is a palindrome or not.
 *
 * A palindrome array is an array that reads the same from left to right and from right to left.
 *
 * Example:
 * Input Array:  [10, 20, 30, 20, 10]
 * Output:       Palindrome Array
 */

#include <iostream>
using namespace std;

// Function to fill the array with numbers
void FillArryWithNumbers(int arr[100], int &lengtharry)
{
    lengtharry = 5; // Set the length of the array

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 20;
    arr[4] = 10;
}

// Function to print array elements
void PrintArry(int arr[100], int lengtharry)
{
    for (int i = 0; i < lengtharry; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// Function to check if the array is a palindrome
bool IsPalindromeNumber(int arr[100], int lengtharry)
{
    // Compare elements from the beginning and the end moving toward the center
    for (int i = 0; i < lengtharry; i++)
    {
        // If any pair of elements does not match, it's not a palindrome
        if (arr[i] != arr[lengtharry - i - 1])
        {
            return false;
        }
    }
    return true; // All elements matched
}

int main()
{
    int arr[100], lengtharry = 0;

    FillArryWithNumbers(arr, lengtharry);

    cout << "Array elements:\n";
    PrintArry(arr, lengtharry);

    // Check and display whether the array is palindrome
    if (IsPalindromeNumber(arr, lengtharry))
        cout << "\nYes, the array is a Palindrome\n";
    else
        cout << "\nNo, the array is NOT a Palindrome\n";

    return 0;
}
