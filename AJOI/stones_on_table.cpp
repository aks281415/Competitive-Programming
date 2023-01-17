#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    cin>>s;
    int c = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i])
        {
            c++;
        }
    }
    cout << c;
}