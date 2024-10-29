#include <bits/stdc++.h>
using namespace std;

string BigIntAdd(string a, string b) {
    if (a.length() < b.length()) {
        swap(a, b);
    }
    string result;
    int c = 0;
    for (int i = 0; i < a.length(); i++) {
        int ta = a[a.length() - 1 - i] - '0';
        int tb = i < b.length() ? b[b.length() - 1 - i] - '0' : 0;
        int sum = ta + tb + c;
        c = sum / 10;
        result += to_string(sum % 10);
    }
    if (c) {
        result += to_string(c);
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << BigIntAdd(a, b) << endl;
    return 0;
}
