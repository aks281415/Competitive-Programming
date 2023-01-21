#include<bits/stdc++.h>
using namespace std;

int main() {
		// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	sort(arr,arr+n);
	int fnas=0;
	for ( int j =0;j<n;j++)
	{
	        int ge =0;
	        int l=0;
	    
	    for ( int k =0;k<n;k++)
	    {
	        if (arr[j]>=arr[k])
	        {
	            ge = ge+1;
	        }
	        else if (arr[j]<arr[k])
	        {
	            l = l +1;
	        }
	    }
	    if ( ge >l)
	    {
	        fnas = fnas+1;
	    }
	}
	cout<<fnas<<endl;
}}
