#include <bits/stdc++.h>
using namespace std;
const long long MOD=1e9+7;
const int SIZE=1e5+5;

vector<int>arr(SIZE);

void pre(){
    arr[1]=1;
    for(int i=2;i<SIZE;i++){
        arr[i]=(arr[i-1]*2)%MOD;
    }
}

int main() {
    pre();
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<arr[n]<<'\n';
    }
	// your code goes here
	return 0;
}
