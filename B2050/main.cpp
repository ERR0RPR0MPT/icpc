#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a + b > c && a + c > b && b + c > a ? 1 : 0) << endl;
    return 0;
}
