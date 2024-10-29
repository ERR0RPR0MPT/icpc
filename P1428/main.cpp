#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n], arr2[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int tempSum = 0;
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i]) {
                tempSum++;
            }
        }
        arr2[i] = tempSum;
    }

    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << arr2[i];
        } else {
            cout << arr2[i] << " ";
        }
    }

    return 0;
}
