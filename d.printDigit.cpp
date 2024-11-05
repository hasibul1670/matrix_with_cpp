#include <bits/stdc++.h>
using namespace std;

void printDigit(int n)
{
     if (n < 10) {
        cout << n << " ";
    } else {
        printDigit(n / 10);
        cout << n % 10 << " ";
    }
}
int main()
{
    int x;
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        int n;
        cin >> n;
        printDigit(n);
        cout << endl;
    }
    return 0;
}