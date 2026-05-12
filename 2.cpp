#include <iostream>
#include <cmath>

using namespace std;

// 1 задание
// int main() {
//     double a, z1, z2;

//     cin >> a;

//     z1 = cos(a) + cos(2*a) + cos(6*a) + cos(7*a);
//     z2 = 4 * cos(a/2.0) * cos(5.0*a/2.0) * cos(4*a);

//     cout << z1 << endl;
//     cout << z2 << endl;

//     return 0;
// }
// 2 задание

// int main() {
//     double r, k, s;

//     cin >> r >> k;

//     s = (4 * pow(r, 2) * k) / (pow(k, 2) + 1);

//     cout << s << endl;

//     return 0;
// }
// 3 задание
using namespace std;


int main() {
    const double p = 101325.0;      // Па
    const double k = 1.38e-23;      // Дж/К
    double T1 = 27.0 + 273.0;       // К
    double T2 = 327.0 + 273.0;      // К

    double n1 = p / (k * T1);
    double n2 = p / (k * T2);
    double delta_n = n2 - n1;

    cout << "Δn = " << delta_n << " м^-3" << endl;
    return 0;
}