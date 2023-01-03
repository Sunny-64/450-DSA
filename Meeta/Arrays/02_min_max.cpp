// Maximum and minimum of an array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 5, 3, 4, 8, 9, 2, 3, 0};
    int min = v[0], max = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if (min > v[i])
        {
            min = v[i];
        }
        if (max < v[i])
        {
            max = v[i];
        }
    }

    cout << "min : " << min << " max : " << max;
    return 0;
}