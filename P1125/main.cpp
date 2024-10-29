#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int maxNum = -1, minNum = 9999999;
    for (int i = 0; i < s.length(); i++) {
        int tempNum = 0;
        for (int j = 0; j < s.length(); j++) {
            if (s[i] == s[j]) {
                tempNum++;
            }
        }
        if (tempNum > maxNum) {
            maxNum = tempNum;
        }
        if (tempNum < minNum) {
            minNum = tempNum;
        }
    }
    int times = maxNum - minNum;
    if (times == 0 || times == 1) {
        cout << "No Answer" << endl << 0 << endl;
        return 0;
    }
    if (times == 2) {
        cout << "Lucky Word" << endl << times << endl;
        return 0;
    }
    for (int i = 2; i <= sqrt(times); i++) {
        if (times % i == 0) {
            cout << "No Answer" << endl << 0 << endl;
            return 0;
        }
    }
    cout << "Lucky Word" << endl << times << endl;
    return 0;
}
