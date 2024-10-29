#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    double Sn = 0;
    cin >> k;
    for (int i = 1; i <= 999999999; i++) {
        Sn += 1.0 / i;
        if (Sn <= k) {
            continue;
        }
        cout << i << endl;
        break;
    }
    return 0;
}
// #include<cstdio>
// int main() {
//     int k,n=0;
//     scanf("%d",&k);
//     for(double Sn=0;Sn<=k;++n,Sn+=1.0/n);
//     printf("%d",n);
//     return 0;
// }
