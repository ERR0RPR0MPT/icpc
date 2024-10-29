#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    int arr[n * n + 5], nowFlag = false;
    while (sum < n * n) {
        int a;
        cin >> a;
        for (int j = sum; j < sum + a; j++) {
            arr[j] = nowFlag;
        }
        sum += a;
        nowFlag = !nowFlag;
    }
    int j = 0;
    while (j < n * n) {
        cout << arr[j];
        if ((j + 1) % n == 0) {
            cout << endl;
        }
        j++;
    }
    return 0;
}
