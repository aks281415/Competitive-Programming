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
        int arr[n];
        int dep[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> dep[j];
        }
        vector<int> v1(1001, 0);
        for (int k = 0; k < n; k++)
        {
            for (int t = arr[k]; t < dep[k]; t++)
            {
                v1[t] += 1;
            }
        }
        int maxi = 0;
        for (int l = 0; l < v1.size(); l++)
        {
            maxi = max(maxi, v1[l]);
        }
        cout << maxi << endl;
    }
}