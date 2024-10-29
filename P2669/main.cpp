#include <bits/stdc++.h>
using namespace std;

int main() {
    int d = 0, td = 1, c = 1, tc = 0;
    cin >> d;
    for (int i = 1; i <= d; i++) {
        tc += c;
        td--;
        if (td == 0) {
            c++;
            td = c;
        }
    }
    cout << tc << endl;
    return 0;
}
