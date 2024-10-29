#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            continue;
        }
        if (arr[i] + arr[i - 1] != 0) {
            cout << "YES" << endl;
        } else if (arr[i] == arr[n - 1] && arr[i - 1] == arr[0]) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
        return 0;
    }
    cout << "YES" << endl;
    return 0;
}
