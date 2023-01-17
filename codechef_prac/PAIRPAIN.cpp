#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
       long long int n;
        cin >> n;
        long long int arr1[n];
        long long int c1 = 0;
        long long int c2 = 0;
       long long int ans;
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            if (arr1[i] == 1)
            {
                c1++;
            }
            else if (arr1[i] == 2)
            {
                c2++;
            }
        }
        ans = (c1 * (n - c1) + c1 * (c1 - 1) / 2 + c2 * (c2 - 1) / 2);
        cout << ans << endl;
    }
}