#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    char lastC = '0';
    char allS[105];
    for (int i = 0; i < n; i++) {
        int a, b;
        char c = '0';
        int flag = scanf("%d %d", &a, &b);
        if (!flag) {
            scanf("%c %d %d", &c, &a, &b);
        }
        if (lastC != '0' && c == '0') {
            c = lastC;
        }
        if (c != '0') {
            if (c == 'a') {
                lastC = c;
                int sNum = sprintf(allS, "%d+%d=%d\n", a, b, a + b);
                sprintf(allS, "%d\n", sNum);
            } else if (c == 'b') {
                lastC = c;
                int sNum = sprintf(allS, "%d-%d=%d\n", a, b, a - b);
                sprintf(allS, "%d\n", sNum);
            } else if (c == 'c') {
                lastC = c;
                int sNum = sprintf(allS, "%d*%d=%d\n", a, b, a * b);
                sprintf(allS, "%d\n", sNum);
            }
        }
    }
    cout << allS << endl;
    return 0;
}
