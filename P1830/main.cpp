#include <bits/stdc++.h>
using namespace std;

struct K {
    int num = 0;
    int last;
};

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    K area[n + 1][m + 1] = {0, 0};
    for (int i = 1; i <= x; i++) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j = x1; j <= x2; j++) {
            for (int k = y1; k <= y2; k++) {
                area[j][k].num++;
                area[j][k].last = i;
            }
        }
    }
    for (int i = 0; i < y; i++) {
        int x1, y1;
        cin >> x1 >> y1;
        if (area[x1][y1].num == 0) {
            cout << "N" << endl;
            continue;
        }
        cout << "Y " << area[x1][y1].num << " " << area[x1][y1].last << endl;
    }

    return 0;
}
