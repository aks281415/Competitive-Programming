#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t)
	{
	    int n;
	    cin>>n;
	    float x =(0.143*n);
	    float y=x;
	    x=pow(y,n);
	    if (x-floor(x)<0.5)
	    {
	        cout<<floor(x)<<"\n";
	    }
	    else
	    {
	        cout<<floor(x)+1<<"\n";
	    }
	    t--;
	}
	return 0;
}
