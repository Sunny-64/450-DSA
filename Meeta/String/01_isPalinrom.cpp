// ques : https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
#include <iostream>
#include <vector>
using namespace std;

int isPalindrome(string s)
{
    int p = s.size() - 1;
    string k = s;
    for (int i = 0; i < s.size() / 2; i++)
    {
        char temp = s[i];
        s[i] = s[p];
        s[p] = temp;
        p--;
    }
    if (k == s)
        return 1;
    else
        return 0;
}

int main()
{
    string s;
    cin >> s;
    int ans = isPalindrome(s);
    cout << ans;
    return 0;
}