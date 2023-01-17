#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        string b;
        cin >> b;
        int maxi = 0;
        int mini = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i]=='?' || b[i]=='?')
            {
                maxi = maxi + 1;
            }
            else if (a[i] != b[i] && (a[i]!='?' && b[i]!='?'))
            {
                maxi = maxi + 1;
                mini = mini +1;
            }
        }
        cout<<mini<<" "<<maxi<<endl;
    }
}