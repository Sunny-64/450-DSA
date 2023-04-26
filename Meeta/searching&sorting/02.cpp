// ques : https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1
#include <iostream>
#include <vector>
using namespace std;
vector<int> valueEqualToIndex(int arr[], int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i + 1)
        {
            ans.push_back(i + 1);
        }
    }
    return ans;
}