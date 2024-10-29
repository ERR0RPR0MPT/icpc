#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2019 == 0 && n % 70 != 0) {
        cout << "right" << endl;
    } else {
        cout << "wrong" << endl;
    }
    return 0;
}
