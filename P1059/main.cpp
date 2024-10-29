#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n + 5], realIndex = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (mp.find(k) == mp.end()) {
            mp[k] = realIndex;
            arr[realIndex++] = k;
        }
    }
    sort(arr, arr + realIndex);
    cout << realIndex << endl;
    for (int i = 0; i < realIndex; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
