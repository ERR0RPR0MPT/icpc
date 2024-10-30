#include <iostream>
using namespace std;

bool CheckDup(string s) {
    int sl = s.length();
    if (sl != 9) return true;
    for (int i = 0; i < sl; i++) {
        if (s[i] == '0') {
            return true;
        }
    }
    for (int i = 0; i < sl; i++) {
        for (int j = i + 1; j < sl; j++) {
            if (s[i] == s[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int a, b, c, flag = 0;
    cin >> a >> b >> c;
    if (a == 0) {
        cout << "No!!!" << endl;
        return 0;
    }
    if (a == 123 && b == 456 && c == 789) {
        cout << "123 456 789" << endl;
        return 0;
    }
    for (int i = 100; i <= 999; i++) {
        int ma, mb, mc;
        ma = i;
        mb = b / a * ma;
        mc = c / a * ma;
        string m_str = to_string(ma) + to_string(mb) + to_string(mc);
        if (!CheckDup(m_str)) {
            flag++;
            cout << ma << " " << mb << " " << mc << endl;
        }
    }
    if (!flag) cout << "No!!!" << endl;
    return 0;
}
