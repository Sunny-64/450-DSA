// ques : https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1
#include <iostream>
#include <vector>
using namespace std;
vector<int> find(int arr[], int n, int x)
{
    int start = -1;
    int end = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x && start == -1)

        {
            start = i;
        }
        if (arr[i] == x)
        {
            end = i;
        }
    }
    return {start, end};
}
