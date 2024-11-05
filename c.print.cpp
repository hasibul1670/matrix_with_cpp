#include <bits/stdc++.h>
using namespace std;

void printFunction(int x)
{
    if (x < 1)
    {
        return;
    }

    cout << x;
    if (x > 1)
    {
        cout << " ";
    }
    printFunction(x - 1);
}
int main()
{
    int x;
    cin >> x;
    printFunction(x);
    return 0;
}