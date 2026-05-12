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
    

// 2 задание
// в1
    double x = 0.3;
    double eps = 0.0001;
    double y = cos(x);
    
    double S = 0;
    double term = 1.0; // Первый член ряда (n=0)
    int n = 0;

    while (abs(term) >= eps) {
        S += term;
        n++;
        // Формула перехода к следующему члену
        term *= -x * x / ((2 * n - 1) * (2 * n));
    }

    cout << "сумма (while): " << fixed << setprecision(6) << S << endl;
    cout << "y: " << y << endl;
    cout << "разница:  " << abs(S - y) << endl;


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

    cout << "сумма (do-while): " << fixed << setprecision(6) << S << endl;
    cout << "y:    " << y << endl;

    
// третье фииизика
    double V = 6.0;      // м3
    double m = 25.0;     // кг
    double M = 0.018;    // кг/моль (перевели в СИ)
    double R = 8.314;    // Дж/(моль*К)

    cout << setw(10) << "t, C" << setw(15) << "P, кПа" << endl;
    cout << "--------------------------" << endl;

    for (int t = 200; t <= 300; t += 20) {
        double T = t + 273.15; // Перевод в Кельвины
        
        // Расчет давления в Паскалях
        double P = (m * R * T) / (M * V);
        
        // Вывод в килопаскалях (кПа) для удобства
        cout << setw(10) << t << setw(15) << fixed << setprecision(2) << P / 1000 << endl;
    }


    return 0;
}