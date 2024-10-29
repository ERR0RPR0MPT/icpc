#include<cstdio>
#include<iostream>
using namespace std;

int main2() {
    string s;
    while (cin >> s) {
        for (int i = s.length() - 1; i >= 0; i--) //数组下标从0开始，若>0，只能输出hell和worl
        {
            cout << s[i]; //若>=0,可以输出hello和world
        }
        cout << endl;
    }
    return 0;
}
