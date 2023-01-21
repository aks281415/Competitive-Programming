#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int even=0,odd=n-1;
	    int copy=n;
	    while(n>0)
	    {
	        if(n%2==0)
	        {
	            arr[even++]=n;
	        }
	        else
	        {
	            arr[odd--]=n;
	        }
	        n--;
	    }
	    for(int i=0;i<copy;i++)
	    cout<<arr[i]<<' ';
	    cout<<endl;
	    
	}
	return 0;
}