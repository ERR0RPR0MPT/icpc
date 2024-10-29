#include <bits/stdc++.h>
using namespace std;

struct K {
    int type;
    int sum = 0;
};

int main() {
    int n, a[100005], b[100005], c[100005], sum = 0;
    K ck[10005], ca[10005];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
    }

    int nowIndex = 1;
    for (int i = 1; i <= n; i++) {
        bool isExist = false;
        for (int j = 1; j <= nowIndex; j++) {
            if (ck[j].type == c[i]) {
                isExist = true;
                ck[j].sum++;
                break;
            }
        }
        if (!isExist) {
            ck[nowIndex] = {c[i], 1};
            nowIndex++;
        }
    }

    int nowAIndex = 1;
    for (int i = 1; i <= n; i++) {
        bool isExist = false;
        for (int j = 1; j <= nowAIndex; j++) {
            if (ca[j].type == a[i]) {
                isExist = true;
                ca[j].sum++;
                break;
            }
        }
        if (!isExist) {
            ca[nowAIndex] = {a[i], 1};
            nowAIndex++;
        }
    }

    for (int i = 1; i < nowAIndex; i++) {
        for (int j = 1; j < nowIndex; j++) {
            if (ca[i].type == b[ck[j].type]) {
                sum += ca[i].sum * ck[j].sum;
            }
        }
    }

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j < nowIndex; j++) {
    //         if (a[i] == b[ck[j].type]) {
    //             sum += ck[j].sum;
    //         }
    //     }
    // }
    cout << sum << endl;
    return 0;
}
