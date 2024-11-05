#include <bits/stdc++.h>
using namespace std;

bool findPrimeNumber(int x)
{
    if (x > 1)
    {
    }
    else
    {
        return false;
    }
}
int main()
{
    int x;
    cin >> x;
    while (T--)
    {
        long long N;
        cin >> N;

        if (findPrimeNumber(N))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}