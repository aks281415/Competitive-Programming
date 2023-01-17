#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int size;
    cin >> size;
    long long int arr[size];
    long long int c = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            c = c + abs(arr[i - 1] - arr[i]);
            arr[i]=arr[i-1];
        }
    }
    cout << c;
}