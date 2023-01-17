#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t, n, k;
	cin>>t;
	while(t--){
	    cin>>n;
	    ll a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cin>>k;
	    int p = a[k-1];
	    sort(a, a+n);
	    for(int i=0;i<n;i++){
	        if(a[i]==p){
	            cout<<i+1<<"\n";
	            break;
	        }
	    }
	    
	}
	return 0;
}