#include <bits/stdc++.h>
using namespace std;

stack<int> t;

int main() {
    string a;
    cin >> a;
    string tempNum = "";
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == '@') {
            cout << t.top() << endl;
            break;
        }
        if (a[i] >= '0' && a[i] <= '9') {
            tempNum += a[i];
        } else if (a[i] == '.') {
            int num = stoi(tempNum);
            // cout << endl << "input:" << num << endl;
            t.push(num);
            tempNum = "";
        } else if (a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/') {
            int a2 = t.top();
            t.pop();
            int a1 = t.top();
            t.pop();
            if (a[i] == '+') {
                t.push(a1 + a2);
            } else if (a[i] == '-') {
                t.push(a1 - a2);
            } else if (a[i] == '*') {
                t.push(a1 * a2);
            } else if (a[i] == '/') {
                t.push(a1 / a2);
            }
        }
    }
    return 0;
}
