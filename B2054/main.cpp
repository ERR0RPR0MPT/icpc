#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int allNum = 0;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        allNum += a;
        if (i == n) {
            printf("%.2lf\n", (double) allNum / (double) n);
        }
    }
    return 0;
}
