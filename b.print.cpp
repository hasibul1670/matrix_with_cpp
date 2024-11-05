#include <bits/stdc++.h>
using namespace std;

void add(int a)
{
    for (int i = 1; i <= a; i++)
    {
        if (i > 1)
            cout << " ";
        cout << i;
    }
}
int main()
{
    int a;
    cin >> a;
    add(a);
    return 0;
}