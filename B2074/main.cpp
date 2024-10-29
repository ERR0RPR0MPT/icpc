#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, day = 1;
    cin >> a >> b;
    while (b--) {
        day *= a;
        day %= 7;
    }
    cout << (day == 1
                 ? "Monday"
                 : (day == 2
                        ? "Tuesday"
                        : (day == 3
                               ? "Wednesday"
                               : (day == 4
                                      ? "Thursday"
                                      : (day == 5 ? "Friday" : (day == 6 ? "Saturday" : "Sunday")
                                      )
                               )
                        )
                 )
            )
            << endl;
    return 0;
}
