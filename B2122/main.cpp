#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, revStr = "";
    // getline(cin, s);
    while (cin >> s) {
        for (int i = 0; i < s.length(); i++) {
            bool isLastChar = i == s.length() - 1;
            if (s[i] == ' ' || isLastChar) {
                if (isLastChar) { revStr += s[i]; }
                for (int j = revStr.length() - 1; j >= 0; j--) {
                    cout << revStr[j];
                }
                cout << endl;
                revStr = "";
                continue;
            }
            revStr += s[i];
        }
    }
    return 0;
}
