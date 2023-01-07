// Move all negative numbers to beginning and positive to end with constant extra space
#include <bits/stdc++.h>
using namespace std;
void rearrange(vector<int> &arr)
{
    // two pointer method
    int j = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

void reArrangeUsingSortFun(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
}