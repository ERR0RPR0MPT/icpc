#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n + 5];
    for (int i = 1; i <= n; i++) {
        arr[i] = i;
    }
    bool flag = true;
    while (flag) {
        for (int i = 1; i <= n; i++) {
            cout << "    " << arr[i];
        }
        cout << endl;
        flag = next_permutation(arr + 1, arr + n + 1);
    }
    return 0;
}
