#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x1 = 1, x2 = 1;
    cin >> n;
    for (int i = 3; i <= n; i++) {
        int temp = x2;
        x2 = x1 + x2;
        x1 = temp;
    }
    cout << x2 << endl;
    return 0;
}
