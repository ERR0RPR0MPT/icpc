#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    string s;
    cin >> m >> s;
    int strLen = s.length();
    bool isFirst = true;
    for (int i = strLen - 1; i >= 0; i--) {
        int strIndex = strLen - i - 1;
        if (s[strIndex] == '0') {
            continue;
        }
        !isFirst ? printf("+"), NULL : isFirst = false, NULL;
        printf("%c*%d^%d", s[strIndex], m, i);
    }
    return 0;
}
