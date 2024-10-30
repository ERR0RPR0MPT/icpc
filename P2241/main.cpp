#include<iostream>
using namespace std;

int main() {
    long long n, m, zfx = 0, jx = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j) {
                jx += (n - i) * (m - j);
            } else {
                zfx += (n - i) * (m - j);
            }
        }
    }
    cout << jx << " " << zfx << endl;
    return 0;
}
