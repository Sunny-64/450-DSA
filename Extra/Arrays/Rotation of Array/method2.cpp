#include <iostream>
using namespace std;

void Rotate(int arr[], int d, int n)
{
    int check = 1;
    while (check <= d)

    {
         int last = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
        check++;
    
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