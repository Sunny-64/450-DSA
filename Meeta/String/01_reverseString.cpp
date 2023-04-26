// ques : https://leetcode.com/problems/reverse-string/description/
#include <iostream>
#include <vector>
using namespace std;
void reverseString(vector<char> &s)
{
    int p = s.size() - 1;
    for (int i = 0; i < s.size() / 2; i++)
    {
        // swap(s[i] , s[p]); time complexity : O(1) for swap function.
        char temp = s[i];
        s[i] = s[p];
        s[p] = temp;
        p--;
    }
}
int main()
{
    int n;
    cin >> n;
    char k;
    vector<char> p;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        p.push_back(k);
    }

    reverseString(p);
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
}
