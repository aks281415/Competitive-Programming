#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int X,page;
	    cin>>X;
	    page=X/25;
	    if(X%25==0)
	    {
	        cout<<page<<endl;
	    }
	    else
	    {
	        cout<<page+1<<endl;
	    }
	}
	return 0;
}
