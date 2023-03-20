#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int flag=true;
		string res="FINE";
		while(n--){
			string s;
			cin>>s;
			bool ones=true;
			char arr[m];
			for(int i=0;i<m;i++) cin>>arr[i];
				for(int i=0;i<m;i++){
					if(arr[i]=='0'){
						ones=false;
						break;
					}
				}
				if((s=="correct") && (!(ones))){
					res="INVALID";
					flag=false;
				} 
				else if((flag)&&(s=="wrong" && ones)) res = "WEAK";
		}
		cout<<res<<endl;
	}
}
