#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	 int t;
	cin>>t;
	while ( t--)
	{
	    long long int a, b;
	    cin>>a>>b;
	    if (a<2 || b <2)
	    {
	        cout<<-1<<endl;
	    }
	    else if (__gcd(a,b)==1)
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	}
	return 0;
}
