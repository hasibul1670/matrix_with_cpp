#include <bits/stdc++.h>
using namespace std;

void sum(int *a, int *b)
{

    cout << *a * 10 << endl;
    cout << *b * 10 << endl;
}
int main()
{
    int a, b;
    cin >> a >> b;

    sum(&a, &b);

    cout << "--------------------------------"<<endl;
    cout << a * 10 << endl;
    cout << b * 10 << endl;
    return 0;
}