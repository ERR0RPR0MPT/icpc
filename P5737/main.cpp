#include <bits/stdc++.h>
using namespace std;

bool isYear(int year) {
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int main() {
    int a, b, sum=0;
    string s = "";
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (isYear(i)) {
            sum++;
            if (s == "") {
                s = to_string(i);
            } else {
                s += " " + to_string(i);
            }
        }
    }
    cout << sum << endl << s << endl;
    return 0;
}
