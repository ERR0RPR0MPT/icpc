#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i%3==0) {
            cout << "x";
        } else {
            cout << "j";
        }
    }
    cout << endl;
    return 0;
}
