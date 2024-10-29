#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            int temp = i * i + j * j;
            int c = sqrt(temp);
            if (temp == pow(c, 2) && c <= n) {
                sum++;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
