#include <bits/stdc++.h>
using namespace std;

void printFunction(int c, int x)
{
    if (c > x)
    {
        return;
    }
    cout << c << endl;
    printFunction(c + 1, x);
}
int main()
{
    int x;
    cin >> x;
    printFunction(1, x);
    return 0;
}