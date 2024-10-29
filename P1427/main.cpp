#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[105], nowIndex = 0;
    while (true) {
        cin >> arr[nowIndex];
        if (arr[nowIndex] == 0) {
            break;
        }
        nowIndex++;
    }
    for (int i = nowIndex - 1; i >= 0; i--) {
        if (i == nowIndex - 1) {
            cout << arr[i];
            continue;
        }
        cout << " " << arr[i];
    }
    return 0;
}
