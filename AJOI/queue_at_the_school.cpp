#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t1;
    cin >> n >> t1;
    string a;
    cin >> a;
    while (t1--)
    {
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] == 'B' && a[i] == 'G')
            {
                a[i] = 'B';
                a[i - 1] = 'G';
                i++;
            }
        }
    }
    cout << a << endl;
}