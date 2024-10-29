#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, aSum = 0, aNum = 0, bSum = 0, bNum = 0;
    double aAvg, bAvg;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            aSum += i;
            aNum++;
        } else {
            bSum += i;
            bNum++;
        }
    }
    aAvg = (double)aSum / (double)aNum;
    bAvg = (double)bSum / (double)bNum;
    printf("%.1lf %.1lf\n", aAvg, bAvg);
    return 0;
}
