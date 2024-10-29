#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, n, days = 1, nums = 0;
    cin >> a >> b >> n;
    while (nums <= n) {
        if (days % 7 == 0 || days % 7 == 6) {
            nums += b;
        } else if (days % 7 == 1 || days % 7 == 2 ||
                   days % 7 == 3 || days % 7 == 4 || days % 7 == 5) {
            nums += a;
        }
        days++;
    }
    cout << --days << endl;
    return 0;
}
