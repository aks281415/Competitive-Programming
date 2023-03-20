#include <iostream>
using namespace std;

void solve_the_question(){
    int t;
    cin>>t;
    
    while(t--)
    {
        int x;
        cin>>x;
        if(x>=67 && x<=45000)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}


int main() {
	// your code goes here
	solve_the_question();
	return 0;
}