#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, badSum = 0;
        cin >> n;
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            badSum += a;
        }
        double rating;
        rating = (double) badSum / (double) n;
        if (rating > 0.75) {
            cout << "WWtql!" << endl;
        } else {
            cout << "WWtcl!" << endl;
        }
    }
    return 0;
}
