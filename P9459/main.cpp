#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;
        if (s1[0] == 'y' && s2[0] == 'y' && s3 == "ding" && s4 == "zhen") {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
