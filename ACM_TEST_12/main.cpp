#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int n1 = a + b, n2 = a + c, n3 = b + c;
    int result;
    if (n1 > n2) {
        result = n1;
    } else {
        result = n2;
    }
    int ans;
    if (result > n3) {
        ans = result;
    } else {
        ans = n3;
    }
    cout << ans << endl;
    return 0;
}
