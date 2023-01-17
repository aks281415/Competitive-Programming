#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0;
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                a = a + 1;
            }
            else
            {
                b = b + 1;
            }
        }
        if (n%2==0)
        {
           if (a==b)
           {
               cout<<"YES"<<endl;
           }
           else if ((a%2==0) && (b%2==0))
           {
               cout<<"YES"<<endl;
           }
           else{
               cout<<"NO"<<endl;
           }
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}