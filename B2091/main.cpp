#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    bool isFirst = true;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        bool isFound = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isFound = true;
                break;
            }
        }
        if (isFound) {
            continue;
        }
        !isFirst ? printf(" "), NULL : isFirst = false, NULL;
        printf("%d", arr[i]);
    }
    cout << endl;
    return 0;
}
