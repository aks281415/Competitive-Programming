#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d, e, f, g, h, i;
        cin >> a >> b >> c;
        cin >> d >> e >> f;
        cin >> g >> h >> i;
        vector<double> v;
        long long a1 = a + b + c;
        long long a2 = d + e + f;
        long long a3 = g + h + i;
        long long b1 = a + d + g;
        long long b2 = b + e + h;
        long long b3 = c + f + i;
        v.push_back(a1);
        v.push_back(a2);
        v.push_back(a3);
        v.push_back(b1);
        v.push_back(b2);
        v.push_back(b3);
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        long long s = v.front();
        if (s % 2 == 0)
        {
            if (s > 0)
            {
                cout << s - 1 << endl;
            }
            else if ( s==0)
            {
                cout << 0 << endl;
            }
        }
        else
        {
            cout << s << endl;
        }
    }
}