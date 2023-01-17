#include <bits/stdc++.h>
using namespace std;
bool primenum(long long int num)
{
    if (num < 2)
    {
        return false;
    }
    else if (num == 2)
    {
        return true;
    }
    long long int root;
    root = sqrt(num);
    if (num % 2 == 0)
    {
        return false;
    }
    else
    {
        for (int i = 3; i <= root; i += 2)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int r = sqrt(n);
        if (r == sqrt(n) && primenum(r) == true)
        {
            cout << "YES";
            cout << "" << endl;
        }
        else
        {
            cout << "NO";
            cout << "" << endl;
        }
    }
}