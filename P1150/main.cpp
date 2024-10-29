#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    n += (n - 1) / (k - 1);
    cout << n << endl;
    return 0;
}
