#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int k = 1;
    int maxi = INT32_MIN;
    for (int i = 1; i < s.size(); i++)
    {
 
        if (s[i] != s[i - 1])
        {
            maxi = max(maxi, k);
            k = 0;
        }
        k=k+1;
        // maxi = max(maxi, k);
    }
    maxi = max(maxi, k);
    cout << maxi << endl;
}