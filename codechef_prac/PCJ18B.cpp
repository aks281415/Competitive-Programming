#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while ( t--)
    {
        int n;
        cin>>n;
        int sum =0;
        while ( n>0)
        {
           sum = sum +(n*n);
           n = (n -2);
        }
        cout<<sum<<endl;
    }
}