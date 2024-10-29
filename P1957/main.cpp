#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    char nowC, resultStr[10005];
    for (int i = 0; i < n; i++) {
        string s;
        int a, b;
        cin >> s;
        bool isThree = s[0] >= 'a' && s[0] <= 'c';
        if (isThree) {
            nowC = s[0];
            // cout << nowC << endl;
            cin >> a >> b;
        } else {
            a = atoi(s.c_str());
            cin >> b;
        }
        // cout << a << " " << b << endl;
        char temp[105];
        if (nowC == 'a') {
            sprintf(temp, "%d+%d=%d\n", a, b, a + b);
            sprintf(temp, "%s%d\n", temp, int(strlen(temp))-1);
            sprintf(resultStr, "%s%s", resultStr, temp);
        } else if (nowC == 'b') {
            sprintf(temp, "%d-%d=%d\n", a, b, a - b);
            sprintf(temp, "%s%d\n", temp, int(strlen(temp))-1);
            sprintf(resultStr, "%s%s", resultStr, temp);
        } else if (nowC == 'c') {
            sprintf(temp, "%d*%d=%d\n", a, b, a * b);
            sprintf(temp, "%s%d\n", temp, int(strlen(temp))-1);
            sprintf(resultStr, "%s%s", resultStr, temp);
        }
    }
    printf("%s", resultStr);
    return 0;
}
