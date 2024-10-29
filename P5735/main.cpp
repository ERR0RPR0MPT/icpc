#include <bits/stdc++.h>
using namespace std;

double dis(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double c1 = dis(x1, y1, x2, y2);
    double c2 = dis(x2, y2, x3, y3);
    double c3 = dis(x3, y3, x1, y1);
    double c = c1 + c2 + c3;
    printf("%.2f\n", c);
    return 0;
}
