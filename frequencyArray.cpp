#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    vector<string> result(N + 2, "0");

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        result[A[i]] = "1";
    }
    for (int i = 0; i < N + 2; i++)
    {
        cout << i << ":" << result[i] << endl;
    }

    return 0;
}