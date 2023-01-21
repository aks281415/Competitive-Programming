#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i=0;i<a;i++)
    {
        int mean,median;
        cin >> mean>>median;
        cout << median<<" "<<median<<" "<<3*mean-2*median<<endl;
    }
	return 0;
}
