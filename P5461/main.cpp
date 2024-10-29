#include <bits/stdc++.h>
using namespace std;

bool mp[10005][10005] = {0};

void dfs(int x, int y, int power) {
    if (power <= 0) {
        return;
    }
    int p = pow(2, power - 1);
    for (int i = x; i < x + p; i++) {
        for (int j = y; j < y + p; j++) {
            mp[i][j] = true;
        }
    }
    dfs(x, y + p, power - 1);
    dfs(x + p, y, power - 1);
    dfs(x + p, y + p, power - 1);
}

int main() {
    int n;
    cin >> n;
    dfs(0, 0, n);
    int pp = pow(2, n);
    for (int i = 0; i < pp; i++) {
        for (int j = 0; j < pp; j++) {
            cout << !mp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
