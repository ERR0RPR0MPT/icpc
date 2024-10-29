#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nowK = 0, useTime = 0;
    int arr[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        if (nowK < arr[i]) {
            useTime += (arr[i] - nowK) * 6 + 6;
            nowK = arr[i];
        } else if (nowK > arr[i]) {
            useTime += (arr[i] - nowK) * 4 + 6;
            nowK = arr[i];
        } else {
            useTime += 1;
        }
    }
    if (nowK > 0) {
        useTime += nowK * 4;
    }
    cout << useTime << endl;
    return 0;
}
