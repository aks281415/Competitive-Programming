#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi = arr[0];
    int maxi_i = 0;
    int mini = arr[0];
    int mini_i = 0;
    for (int i = 0; i < n; i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
            maxi_i = i;
        }
        else if (mini >= arr[i])
        {
            mini = arr[i];
            mini_i = i;
        }
    }
    if (mini_i < maxi_i)
    {
        mini_i = (n - 1) - mini_i;
        cout << (mini_i + maxi_i - 1) << endl;
    }
    else
    {
        mini_i = (n - 1) - mini_i;
        cout << (mini_i + maxi_i) << endl;
    }
}