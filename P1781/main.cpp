#include <algorithm>
#include <iostream>
using namespace std;

struct K {
    int index;
    string num;
};

bool cmp(K a, K b) {
    int al = a.num.length();
    int bl = b.num.length();
    if (al > bl) {
        return true;
    } else if (al < bl) {
        return false;
    } else {
        return a.num > b.num;
    }
}

int main() {
    int n;
    cin >> n;
    K arr[n + 5];
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        arr[i] = {i + 1, a};
    }
    sort(arr, arr + n, cmp);
    cout << arr[0].index << endl << arr[0].num << endl;
    return 0;
}
