#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    a > b ? swap(a, b), NULL : NULL;
    a > c ? swap(a, c), NULL : NULL;
    b > c ? swap(b, c), NULL : NULL;
    printf("%d %d %d\n", a, b, c);
    return 0;
}
