#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum=0;
    for (int i = 1; i <= 5; i++) {
        string year;
        cin >> year;
        if (year[0] == year[2] && year[3] - 1 == year[1]) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
