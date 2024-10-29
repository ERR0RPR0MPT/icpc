#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        sum += t;
    }
    double avg = (double)sum / (double)n;
    printf("%d %.5f\n", sum, avg);
    return 0;
}
