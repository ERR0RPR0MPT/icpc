#include <math.h>
#include <stdio.h>

int main() {
    int num, hundreds, tens, ones;
    for (num = 100; num < 1000; num++) {
        hundreds = num / 100;
        tens = num / 10 % 10;
        ones = num % 10;
        if (num == pow(hundreds, 3) + pow(tens, 3) + pow(ones, 3)) {
            printf("%d\n", num);
        }
    }
    return 0;
}
