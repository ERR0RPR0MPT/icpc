#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int minPrice = 99999999;
    for (int i = 0; i < 3; i++) {
        int a, b;
        cin >> a >> b;
        int pktNum = (n + a - 1) / a;
        int price = pktNum * b;
        minPrice = min(price, minPrice);
    }
    cout << minPrice << endl;
    return 0;
}
