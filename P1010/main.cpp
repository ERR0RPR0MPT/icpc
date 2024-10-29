#include <bits/stdc++.h>
using namespace std;

string CalcPowerStr(int a) {
    string result = "";
    for (int p = 14; p >= 0; p--) {
        int k = pow(2, p);
        if (k <= a) {
            if (p == 0) {
                result +=  "2(0)";
            } else if (p == 1) {
                result += "2";
            } else {
                result += "2(" + CalcPowerStr(p) + ")";
            }
            a -= k;
            a > 0 ? result += "+", NULL : NULL;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << CalcPowerStr(n) << endl;
    return 0;
}
