#include <bits/stdc++.h>
using namespace std;

struct K {
    string name;
    int a1, a2, a3;
};

K l[1005] = {"", 0, 0, 0};

void OutputStr(K ki, K kj) {
    if (abs(ki.a1 - kj.a1) <= 5 &&
        abs(ki.a2 - kj.a2) <= 5 &&
        abs(ki.a3 - kj.a3) <= 5 &&
        abs(ki.a1 + ki.a2 + ki.a3 - kj.a1 - kj.a2 - kj.a3) <= 10) {
        if (ki.name < kj.name) {
            cout << ki.name + " " + kj.name << endl;
        } else if (ki.name > kj.name) {
            cout << kj.name + " " + ki.name << endl;
        } else {
            cout << "Ciallo～(∠・ω< )⌒☆" << endl;
        }
    }
}

bool CmpK(K a, K b) {
    return a.name < b.name;
}

int main() {
    int n;
    cin >> n;
    int lArrLen = 0;
    for (int i = 0; i < n; i++) {
        string s;
        int a1, a2, a3;
        cin >> s >> a1 >> a2 >> a3;
        K k = {s, a1, a2, a3};
        l[lArrLen++] = k;
    }
    sort(l, l + lArrLen, CmpK);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            OutputStr(l[i], l[j]);
        }
    }
    return 0;
}
