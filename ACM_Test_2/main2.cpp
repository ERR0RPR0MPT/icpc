#include <bits/stdc++.h>
using namespace std;

int main() {
    int a , b,c,d;
    c= a%100;
    cin >> a;
    if (c<=99 && c>1) {
        d = (a - a % 100) / 100 + 1,cout << d;
    }
    else{b=a/100,cout << b;}
    return 0;
    }