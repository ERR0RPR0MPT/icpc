#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, nowNum = 1;
    cin >> n;
    while (n != 0) {
        for (int i = 1; i <= n; i++) {
            printf("%02d", nowNum++);
        }
        printf("\n");
        n--;
    }
    return 0;
}
