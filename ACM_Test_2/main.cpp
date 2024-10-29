#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a;
    c = a % 100;
    // if (c <= 99 && c > 1) {
    if (c!=0) {
        d = (a - c) / 100 + 1, cout << d;
    } else {
        b = a / 100, cout << b;
    }
    return 0;
}
