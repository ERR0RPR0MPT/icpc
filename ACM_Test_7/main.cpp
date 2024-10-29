#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,sum=0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (a<=10) {
            continue;
        }
        sum += a-10;
    }
    cout << sum << endl;
    return 0;
}
