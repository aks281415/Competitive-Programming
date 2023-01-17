#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else if (n < 4)
    {
        cout << "NO SOLUTION" << endl;
    }
    else if (n == 4)
    {
        cout << "3 1 4 2" << endl;
    }
    else
    {
        for (int i = 1; i <= n; i = i + 2)
        {
            cout << i << " ";
        }
        for (int j = 2; j <= n; j = j + 2)
        {
            cout << j;
            if (j + 2 <= n)
            {
                cout << " ";
            }
            else
            {
                cout << endl;
            }
        }
    }
}