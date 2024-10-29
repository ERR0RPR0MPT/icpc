#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 == s2) {
            cout << "Tie";
        } else if (s1 == "Rock") {
            if (s2 == "Scissors") {
                cout << "Player1";
            } else {
                cout << "Player2";
            }
        } else if (s1 == "Scissors") {
            if (s2 == "Paper") {
                cout << "Player1";
            } else {
                cout << "Player2";
            }
        } else if (s1 == "Paper") {
            if (s2 == "Rock") {
                cout << "Player1";
            } else {
                cout << "Player2";
            }
        }
        cout << endl;
    }
    return 0;
}
