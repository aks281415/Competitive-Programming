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
        int arr2[n];
        int sum =0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }
        for (int j =0;j<n;j++)
        {
            arr2[j]=sum -arr[j];
            
        }
        sort(arr2,arr2+n);
        cout<<arr2[n-1]<<endl;
       
        
    }
}