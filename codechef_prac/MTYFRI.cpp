#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int>m,tom;
	    for(int i=0;i<n;i++){
	        int num;
	        cin>>num;
	        if(i%2==0){
	            tom.push_back(num);
	        }
	        else{
	            m.push_back(num);
	        }
	    }
	    sort(m.begin(),m.end());
	    sort(tom.begin(),tom.end(),greater<int>());
	    int i=0;
	    while(k>0&&i<m.size()&&i<tom.size()){
	        if(m[i]<tom[i]){
	            swap(tom[i],m[i]);
	        }
	        else{
	            break;
	        }
	        i++;
	        k--;
	    }
	    int sum2=accumulate(tom.begin(),tom.end(),0);
	    int sum1=accumulate(m.begin(),m.end(),0);
	    if(sum1>sum2){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}