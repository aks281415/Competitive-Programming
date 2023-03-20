#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--)
	
	{
	    int n;
	    cin>>n;
	    int k ;
	    cin>>k;
	    string s;
	    cin>>s;
	    int countt=0;
	    int i;
	    int j;
	    for (i =0;i<n/2;i++)
	    {
	        if (s[i]!=s[n-i-1])
	        {
	            countt+=1;
	        }
	    }
	    if (k>=countt)
	    {
	       if ((k-countt)%2==0)
	           {
	               cout<<"YES"<<endl;
	           }
	       else if (n%2!=0)
	       {
	           cout<<"YES"<<endl;
	       }
	       else
	           {
	               cout<<"NO"<<endl;
	           }
	       
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
