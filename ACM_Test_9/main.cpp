#include <bits/stdc++.h>
using namespace std;

struct K {
    string name;
    int height;
};

int main() {
    int n;
    K max1 = {"", -99999998}, max2 = {"", -99999999};
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        int a;
        cin >> s >> a;
        // cout << s << " " << a;
        K temp = {s, a};
        if (temp.height > max1.height) {
            K tempMax1 = max1;
            max1 = temp;
            max2 = tempMax1;
        } else if (temp.height <= max1.height && temp.height > max2.height) {
            max2 = temp;
        }
    }
    cout << max2.name << endl;
    return 0;
}
