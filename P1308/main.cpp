#include <bits/stdc++.h>
using namespace std;

string toLower(string s) {
    string result;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            result += s[i] - 'A' + 'a';
        } else {
            result += s[i];
        }
    }
    return result;
}

int main() {
    int sum = 0, index = 0, finalIndex;
    char cStr[1000005];
    string subStr, s;
    cin >> subStr;
    cin.ignore();
    subStr = toLower(subStr);
    gets(cStr);
    s = cStr;
    cout << s << endl;
    s = toLower(s);
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            temp += s[i];
            continue;
        }
        // cout << temp << endl;
        if (subStr == temp) {
            sum++;
            finalIndex = min(finalIndex, index);
        } else {
            index += temp.length() + 1;
        }
        temp = "";
    }
    if (sum == 0) {
        cout << -1 << endl;
    } else {
        cout << sum << " " << finalIndex << endl;
    }
    return 0;
}
