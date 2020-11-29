//
// Created by echo_ on 2020/11/29.
//

//exchange the 2 items a and b
void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int p1003() {
    int m;
    int *num;
    int **a;
    cin >> m;
    a = new int *[m];
    num = new int [m];
    for (int i = 0; i < m; ++i) {
        cin >> num[i];
        a[i] = new int[num[i]];
        for(int j = 0; j<num[i]; ++j){
            cin >> a[i][j];
        }
        for (int j = 0; j < num[i] - 1; j++)
        {
            if (a[i][j] > a[i][j + 1])
            {
                swap(a[i][j], a[i][j + 1]);
            }
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < num[i]; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
