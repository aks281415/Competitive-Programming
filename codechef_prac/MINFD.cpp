#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        int x;
        cin>>n;
        cin>>x;
        int arr[n];
        for ( int i =0 ;i <n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        bool flag =0;
        int sum =0;
        int ans =0;
        for (int j =n-1;j>=0;j--)
        {
            sum +=arr[j];
            if (sum>=x)
            {
                flag =1;
                ans =n-j;
                break;
            }
        }
        if (flag)
        {
            cout<<ans<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }return 0;
}