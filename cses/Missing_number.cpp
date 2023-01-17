#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    long long int n;
    cin>>n;
    long long int sum = 0;
    long long int arr;
    // int arr[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr;
        sum += arr;
    }
    cout << (((n * (n + 1)) / 2) - sum) << endl;
    // cout << ans << endl;
}