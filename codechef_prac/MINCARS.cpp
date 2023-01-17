#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll m;
    cin>>m;
    while(m--){
        ll y;
        cin>>y;
        if(y<=4){
            cout<<1<<endl;
        }
        else if(y%4==0){
            cout<<y/4<<endl;
        }
        else{
            cout<<y/4+1<<endl;
        }
    }
    return 0;
}