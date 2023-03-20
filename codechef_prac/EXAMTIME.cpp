#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while (t--)
{
    int dsad , tocd,dmd,dsas,tocs,dms;
    cin>>dsad>>tocd>>dmd;
    cin>>dsas>>tocs>>dms;
    int totald = dsad+tocd+dmd;
    int totals= dsas+tocs+dms;
    if (totald>totals)
    {
        cout<<"Dragon"<<endl;
    }
    else if (totald<totals)
    {
        cout<<"Sloth"<<endl;
    }
    else if (totald==totals)
    {
        if (dsad>dsas)
        {
            cout<<"Dragon"<<endl;
        }
        else if (dsad<dsas)
        {
            cout<<"Sloth"<<endl;
        }
        else if (dsad==dsas)
        {
            if (tocd>tocs)
            {
                cout<<"Dragon"<<endl;
            }
            else if (tocd<tocs)
            {
                cout<<"Sloth"<<endl;
            }
            else
            {
                if (dmd>dms)
                {
                    cout<<"Dragon"<<endl;
                }
                else if ( dmd<dms)
                {
                    cout<<"Sloth"<<endl;
                }
                else{
                    cout<<"Tie"<<endl;
                }
            }
        }
    }
}return 0; 
}