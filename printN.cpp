#include <bits/stdc++.h>
using namespace std;

int sumArray(int A[], int n)
{
    cout << "n :" << n <<endl;
    if (n <= 0)
        return 0;
    return A[n - 1] + sumArray(A, n - 1);
}

int main()
{
    int A[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    int sum = sumArray(A, 5);
    cout << sum << endl;

    return 0;
}
