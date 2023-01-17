#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long int ans;
    while (t--)
    {
       long long int n;
        cin >> n;
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        sort(arr1, arr1 + n);
        {
            ans = ((n * (n - 1)) / 2);
           
        } cout<<ans<<endl;
        
    }
}