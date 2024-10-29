#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    scanf("%d", &n);
    if (n > 1) {
        s = "s";
    }
    printf("Today, I ate %d apple%s.\n", n, s.c_str());
    return 0;
}
