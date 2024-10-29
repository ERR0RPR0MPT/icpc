#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    long long a = strtoll(s.c_str(), nullptr, 10);
    if (s.find("62") != string::npos || a % 62 == 0 && a != 0) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}
