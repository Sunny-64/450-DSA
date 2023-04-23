#include <bits/stdc++.h>
using namespace std;

void printDups(string s)
{
    map<char, int> ans;
    for (int i = 0; i < s.size(); i++)
        ans[s[i]]++;
    for (auto i : ans)
        if (i.second > 1)
            cout << i.first << " " << i.second << endl;
}

int main()
{
    string str = "test string";
    printDups(str);
    return 0;
}