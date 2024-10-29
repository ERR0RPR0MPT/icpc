#include <iostream>
using namespace std;

int main() {
    int x, a, u, b, z;
    cin >> x;
    a = (x % 2 == 0 && x > 4 && x <= 12) ? 1 : 0;
    u = (x % 2 == 0 || x > 4 && x <= 12) ? 1 : 0;
    b = (x % 2 == 0 && (x < 4 || x > 12) || x % 2 != 0 && (x > 4 && x <= 12)) ? 1 : 0;
    z = (x % 2 != 0 && (x < 4 || x > 12)) ? 1 : 0;
    printf("%d %d %d %d\n", a, u, b, z);
    return 0;
}
