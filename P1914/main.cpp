#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.length(); i++) {
        int index = s[i] - 'a';
        index += n;
        while (index >= 26) {
            index -= 26;
        }
        s[i] = index + 'a';
    }
    cout << s << endl;
    return 0;
}
