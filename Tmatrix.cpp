#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin >> row ;
    int arr[row][row];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> arr[i][j];
        }
    }

    int mainDia = 0, secDia = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i == j)
            {
                mainDia += arr[i][j];
            }
            if (i + j == row - 1)
            {

                secDia += arr[i][j];
            }
        }
    }

    int diff = abs(mainDia - secDia);
    cout << diff;
    return 0;
}