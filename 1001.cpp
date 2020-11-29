//
// Created by echo_ on 2020/11/29.
//
#include <iostream>
void p1001(){
    int n;
    char c[110];
    int *count;
    cin >> n;
    count = new int[n];
    for (int i = 0; i < n; ++i) {
        count[i] = 0;
    }
    cin.getline(c, 110);
    for(int i=0; i<n; i++) {
        cin.getline(c, 110);
        for(int j =0 ; c[j] != '\0'; j++) {
            if ('0' <= c[j] && c[j] <= '9') {
                count[i] ++;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << count[i] << endl;
    }
}