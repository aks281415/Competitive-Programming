#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t; cin>>t;
    while(t--){
        long long int n; cin>>n;
        int arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int p=0,ne=0;
        for (long long int i=0;i<n;i++){
            if (arr[i]==0){
                continue;
            }
            else if (arr[i]<0){
                ne++;
            }
            else if (arr[i]>0){
                p++;
            }
             
        }
        cout<<(p*(p-1))/2 + (ne*(ne-1))/2<<endl;
    }
    return 0;
}