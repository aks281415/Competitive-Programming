#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int k;
    cin >> k;
    int cnt = 0;
    while (k != 0)
    {
        if (k % 10 == 7 || k % 10 == 4)
        {
            cnt = cnt + 1;
        }
        k = k / 10;
    }
    if (cnt == 7 || cnt == 4)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}