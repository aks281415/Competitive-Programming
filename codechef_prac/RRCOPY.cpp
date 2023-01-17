#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(arr1[i]);
        }
        cout << st.size() << endl;
    }
}