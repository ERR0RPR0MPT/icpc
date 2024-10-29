#include <bits/stdc++.h>
using namespace std;

int calcSum(int n) {
    long long sum = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            sum += i + n / i;
        }
    }
    sum -= n;
    return sum;
}

int main() {
    int s, i;
    cin >> s;
    i = s;
    while (true) {
        int k = calcSum(i);
        if (calcSum(k) == i && i != k)
        {
            cout << i << " " << k << endl;
            break;
        }
        i++;
    }
    return 0;
}
