#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int kInt) {
    string s = to_string(kInt);
    // if (s.length() % 2 == 0) {
    //     for (int i = 0; i < s.length() / 2; i++) {
    //         if (s[i] != s[s.length() - i - 1]) {
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 11; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime && isPalindrome(i)) { sum++; }
    }
    cout << sum << endl;
    return 0;
}
