#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[0] == s[1] && s[0] == s[2] && s[0] == s[3]) {
        cout << "Weak" << endl;
        return 0;
    }
    bool isWeak = true;
    for (int i = 1; i <= 3; i++) {
        char a1 = s[i-1], a2;
        if (s[i] >= s[i - 1]) {
            a2 = s[i];
            if (a2 - 1 != a1) {
                isWeak = false;
                break;
            }
        } else {
            if (s[i] != '0' || s[i - 1] != '9') {
                isWeak = false;
                break;
            }
        }
    }
    isWeak ? printf("Weak"), NULL : printf("Strong"), NULL;
    return 0;
}
