#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (true)
    {
        string y = to_string(a + 1);
        // cout<<y<<endl;
        set<char> st;
        for (int i = 0; i < y.size(); i++)
        {
            st.insert(y[i]);
        }
        // st.insert(y);
        if (st.size() == y.size())
        {
            cout << y << endl;
            break;
        }
        else
        {
            a = a + 1;
        }
    }
}