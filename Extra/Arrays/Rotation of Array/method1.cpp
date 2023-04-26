// arr[] = {1, 2, 3, 4, 5, 6, 7}, d = 2
// Output: 3 4 5 6 7 1 2

// Input: arr[] = {3, 4, 5, 6, 7, 1, 2}, d=2
// Output: 5 6 7 1 2 3 4

#include <iostream>
using namespace std;

void Rotate(int arr[], int d, int n)
{
    int temp[n];
    int k = 0;
    for (int i = d; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

// Function to print elements of array
void PrintTheArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int N = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    // Function calling
    Rotate(arr, d, N);
    PrintTheArray(arr, N);

    return 0;
}