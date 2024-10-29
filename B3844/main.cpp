#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a = 'A' + i + j;
            while (a > 'Z') {
                a -= 26;
            }
            cout << (char)a;
        }
        cout << endl;
    }
    return 0;
}
