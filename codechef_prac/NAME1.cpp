#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pa1;
        cin >> pa1;
        string pa2;
        cin >> pa2;
        int c;
        cin >> c;
        string c1;
        cin >> c1;
        string cc;
        int flag = 0;
        for (int i = 0; i < c - 1; i++)
        {
            string c2;
            cin >> c2;
            string cc = c1.append(c2);
        }
        pa1.append(pa2);
        map<char, int> mp1, mp2;
        for (int i = 0; i < pa1.length(); i++)
        {

            mp1[pa1[i]]++;
        }
        for (int k = 0; k < c1.length(); k++)
        {
            mp2[c1[k]]++;
        }
        for (auto pt : mp2)
        {
            if (mp1.find(pt.first) == mp1.end())
            {
                break;
            }
            else
            {
                if (pt.second <= mp1[pt.first])
                {
                    flag = flag + 1;
                }
            }
        }
        if (flag == mp2.size())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}