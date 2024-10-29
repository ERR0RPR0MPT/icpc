#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,z;
    cin >> x >> y;
    if (x!=y) {
        if (x == 0 && y == 1 || x == 1 && y == 0) {
            z = 2;
        } else if (x == 1 && y == 2 || x == 2 && y == 1) {
            z = 0;
        } else if (x == 2 && y == 0 || x == 0 && y == 2) {
            z = 1;
        }
    } else {
        z = x;
    }
    cout << z << endl;
    return 0;
}
