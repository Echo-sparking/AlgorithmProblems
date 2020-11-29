//
// Created by echo_ on 2020/11/29.
//
#include <iostream>
//exchange the 2 items a and b
void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int p1002() {
    int m;
    int n;
    int **a;
    int *out;
    cin >> m;
    a = new int *[m];
    out = new int[m];
    for (int i = 0; i < m; ++i) {
        cin >> n;
        a[i] = new int[n];
        for(int j = 0; j<n; ++j){
            cin >> a[i][j];
        }
        for (int k = 0; k < n; k++)
        {
            for (int j = 0; j < n - k - 1; j++)
            {
                if (a[i][j] > a[i][j + 1])
                {
                    swap(a[i][j], a[i][j + 1]);
                }
            }
        }
        out[i] = a[i][1];
    }
    for (int i = 0; i < m; ++i) {
        cout << out[i] <<endl;
    }
    return 0;
}