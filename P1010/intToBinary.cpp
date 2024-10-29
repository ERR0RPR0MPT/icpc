#include <iostream>
using namespace std;

void intToBinary(int num, int n[10005]) {
    // 初始化数组
    for (int i = 0; i < 10005; ++i) {
        n[i] = 0;
    }

    int index = 0;
    while (num > 0) {
        n[index] = num % 2; // 取余得到二进制位
        num /= 2;           // 除以2得到下一个数
        index++;
    }

    // 输出结果（可选）
    cout << "Binary representation (reversed order): ";
    for (int i = 0; i < index; ++i) {
        cout << n[i];
    }
    cout << endl;
}

int main3() {
    int n[10005]; // 存储二进制数的数组
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    intToBinary(num, n);

    return 0;
}