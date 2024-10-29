#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.length() < s2.length()) {
        swap(s1, s2);
    }
    for (int i = 0; i < s1.length(); i++) {
        for (int j = 0; j < s2.length(); j++) {
            if (s1[i] == s2[j] && i + s2.length() <= s1.length()) {
                string tempStr = s1.substr(i, s2.length());
                // cout << i + s2.length() << " " << s1.length() << " " << tempStr << endl;
                if (tempStr == s2) {
                    if (s1.length() > s2.length()) {
                        swap(s1, s2);
                    }
                    printf("%s is substring of %s\n", s1.c_str(), s2.c_str());
                    return 0;
                }
            }
        }
    }
    cout << "No substring" << endl;
    return 0;
}
