#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	if(t>=1 && t<=100)
	{
	    int n,x;
	    for(int i=0;i<t;i++)
	    {
	        cin>>n>>x;
	        if(n>=1 && x<=10)
	        {
	            if((n*x)%4>0)
	            cout<<((n*x)/4)+1<<endl;
	            else
	            cout<<(n*x)/4<<endl;
	        }
	    }
	}
	return 0;
}
