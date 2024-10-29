#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int mp[n + 5][m + 5] = {0};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char a;
            cin >> a;
            if (a == '*') {
                mp[i - 1][j - 1] += 1;
                mp[i - 1][j] += 1;
                mp[i - 1][j + 1] += 1;
                mp[i][j - 1] += 1;
                mp[i][j] = -99999;
                mp[i][j + 1] += 1;
                mp[i + 1][j - 1] += 1;
                mp[i + 1][j] += 1;
                mp[i + 1][j + 1] += 1;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mp[i][j] < 0) {
                cout << "*";
            } else {
                cout << mp[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}
