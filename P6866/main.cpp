#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, sum = 0;
    cin >> n >> m;
    char s[n + 5][m + 5];
    memset(s, '.', sizeof(s));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> s[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i - 1][j - 1] == s[i - 1][j] &&
                s[i - 1][j] == s[i][j - 1] &&
                s[i][j - 1] == '.' &&
                s[i][j] == '*') {
                sum++;
                s[i][j] = 'k';
            }
        }
    }
    cout << sum << endl;
    return 0;
}
