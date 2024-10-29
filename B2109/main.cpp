#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int sum = 0;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        s[i] >= '0' && s[i] <= '9' ? sum++, NULL : NULL;
    }
    cout << sum << endl;
    return 0;
}
