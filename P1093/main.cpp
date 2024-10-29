#include <bits/stdc++.h>
using namespace std;

struct K {
    int index, yw, sx, yy, zf;
};

bool cmp(K a, K b) {
    if (a.zf > b.zf) return true;
    if (a.zf < b.zf) return false;
    if (a.yw > b.yw) return true;
    if (a.yw < b.yw) return false;
    if (a.index > b.index) return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    K k[n + 5];
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        k[i].index = i + 1;
        k[i].yw = a;
        k[i].sx = b;
        k[i].yy = c;
        k[i].zf = a + b + c;
    }
    sort(k, k + n, cmp);
    for (int i = 0; i < 5; i++) {
        cout << k[i].index << " " << k[i].zf << endl;
    }
    return 0;
}
