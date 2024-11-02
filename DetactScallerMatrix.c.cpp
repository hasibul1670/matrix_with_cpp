#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin >> row;
    int arr[row][row];
    int flag = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> arr[i][j];
        }
    }
    int element = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != element)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if (flag == 0)
    {
        cout << "Matrix is not Scaler" << endl;
    }
    else
    {
        cout << "Matrix is  Scaler" << endl;
    }
    return 0;
}