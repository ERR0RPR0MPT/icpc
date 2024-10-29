#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100005];
    int i = 0;
    arr[i++] = n;
    while (arr[i - 1] != 1) {
        if (arr[i - 1] % 2 == 0) {
            arr[i++] = arr[i - 1] / 2;
        } else {
            arr[i++] = arr[i - 1] * 3 + 1;
        }
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << arr[j] << " ";
    }
    return 0;
}
