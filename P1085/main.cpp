#include <bits/stdc++.h>
using namespace std;

struct Obj {
    int day;
    int unhappy;
};

bool cmp(const Obj &a, const Obj &b) {
    return a.unhappy < b.unhappy;
}

int main() {
    int a, b;
    Obj n[7];
    for (int i = 0; i < 7; i++) {
        cin >> a >> b;
        n[i] = {
            .day = i + 1,
            .unhappy = a + b
        };
    }
    sort(n, n + 7, cmp);
    if (n[6].unhappy <= 8) {
        cout << 0 << endl;
    } else {
        //遍历最低日期
        int minDay = 99;
        for (int i = 0; i < 7; i++) {
            if (n[i].unhappy == n[6].unhappy) {
                minDay = min(minDay, n[i].day);
            }
        }
        cout << minDay << endl;
    }
    return 0;
}
