#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[m + 5];
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
