#include <bits/stdc++.h>
using namespace std;

int main()
{
    string N;
    cin >> N;
    int f[26] = {0};
    int len = N.size();

    for (int i = 0; i < len; i++)
    {
        char ch = N[i];
        int index = ch - 'a';
        f[index]++;
    }
    for (int i = 0; i < 26; i++)
    {
        cout << (char)(i +'a') << ":" << f[i] << endl;
    }

    return 0;
}