#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[0]))
        {
            s[0] = toupper(s[0]);
        }
       /* else
        {
            if (i > 0)
            {
                s[i] = s[i];
            }
        }*/
    }
    cout << s << endl;
}