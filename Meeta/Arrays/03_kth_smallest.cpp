// Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

#include <bits/stdc++.h>
using namespace std;
int kthSmallest(int arr[], int l, int r, int k)
{
    priority_queue<int> ans(arr, arr + r + 1);
    int m = r + 1 - k;
    while (m--)
    {
        ans.pop();
    }
    return ans.top();
}
