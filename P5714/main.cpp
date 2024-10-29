#include <iostream>
using namespace std;

int main() {
    double m, h;
    double bmi;
    cin >> m >> h;
    bmi = m / (h * h);
    if (bmi < 18.5) {
        cout << "Underweight";
    } else if (bmi >= 18.5 && bmi < 24) {
        cout << "Normal";
    } else {
        printf("%.6g\n", bmi);
        cout << "Overweight";
        // cout << bmi << endl << "Overweight";
    }
    cout << endl;
    return 0;
}
