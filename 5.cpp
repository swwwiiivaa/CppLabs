#include <iostream>
#include <cmath>
using namespace std;


// функция для первого задания
int max_val (int a, int b)
{
    int c;
    c = (a > b) ? a : b; // тернарный опер уполнамоченный
    return c; // пепе
}

// функция для второго задания
double g(double x, double y)
{
    double res;
    res = (x * x + y * y) / (x * x + 2 * x * y + 3 * y * y + 4);
    return res;
}


int main(){
    // вызовы для первого задания
    int x, y, z;
    cout << "\n поочередно введите х и у \n";
    cin >> x >> y;
    z = max_val(x, y);
    cout << "z=" << z;
    double a, b, result;

    //вызовы для второго задания
    cout << "Введите числа a и b: ";
    cin >> a >> b;
    // ну итог лол
    result = g(1.2, a) + g(b, a) - g(2 * a - 1, a * b);
    // ну вывод итога лол
    cout << "Результат: " << result << endl;
    return 0;

}
