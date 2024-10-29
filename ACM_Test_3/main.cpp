#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,max1,max2;
    cin >> a >> b >> c;
    max1 = max(a+b, a+c);
    max2 = max(max1, b+c);
    cout << max2 << endl;
    return 0;
}
