#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    int cutTimes = 1;
    cin >> n;
    while (n != 1 && n != 0) {
        n = floor(n / 2);
        cutTimes++;
    }
    cout << cutTimes << endl;
    return 0;
}
