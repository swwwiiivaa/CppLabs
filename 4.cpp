#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    // задание 1
    // vector<int> grades;
    // int n;
    // cout << "Введите кол-во студентов в группе ";
    // cin >> n;
    // for(int i = 0; i < n; i++){
    //     int a, b, c, d;
    //     cout << "Введите 4 оценки через пробел для студента " << i << " ";
    //     cin >> a >> b >> c >> d;
    //     grades.push_back(a);
    //     grades.push_back(b);
    //     grades.push_back(c);
    //     grades.push_back(d);
    // }
    // int sum = 0;
    // for (int i = 0; i < grades.size(); i++) {
    // sum += grades[i];
    // }
    // cout << "Сумма: " << sum << endl;
    // cout << "Среднее значение: " << (double)sum / grades.size();
    


// в2
    double x = 0.3;
    double eps = 0.0001;
    double y = cos(x); // Контрольное значение
    
    double S = 0;
    double term = 1.0; // Первый член ряда (n=0)
    int n = 0;

    while (abs(term) >= eps) {
        S += term;
        n++;
        // Формула перехода к следующему члену
        term *= -x * x / ((2 * n - 1) * (2 * n));
    }

    cout << "Sum (while): " << fixed << setprecision(6) << S << endl;
    cout << "Control (y): " << y << endl;
    cout << "Difference:  " << abs(S - y) << endl;

    
// в2
    double x = 0.3;
    double eps = 0.0001;
    double y = cos(x);
    
    double S = 0;
    double term = 1.0;
    int n = 0;

    do {
        S += term;
        n++;
        term *= -x * x / ((2 * n - 1) * (2 * n));
    } while (abs(term) >= eps);

    cout << "Sum (do-while): " << fixed << setprecision(6) << S << endl;
    cout << "Control (y):    " << y << endl;




    return 0;
}