#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int b = 0;
    //cin >> s;
    getline(cin, s);
    int a = s.size();
    
    while (b < a)
    {
        if (s[b] == '.')
        {
            cout << "0";
            b = b + 1;
        }
        if ((s[b] == '-') && (s[b+1] == '.'))
        {
            cout << "1";
            b = b + 2;
        }
        if ((s[b] == '-') && (s[b+1] == '-'))
        {
            cout << "2";
            b = b + 2;
        }
    }
}