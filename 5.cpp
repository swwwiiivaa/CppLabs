#include <iostream>
#include <cmath>
using namespace std;

// описание пользовательской функции
int max_val (int a, int b) // заголовок функции (переименовано, чтобы не конфликтовать с std::max)
{
    int c; // исправлено на латинскую 'c'
    c = (a > b) ? a : b; // тело функции
    return c; //
}


    
    
double g(double x, double y)
{
    double res;
    res = (x * x + y * y) / (x * x + 2 * x * y + 3 * y * y + 4);
    return res;
}


int main() // в C++ main должен возвращать int
{
    setlocale(LC_ALL,"Rus");
    int x, y, z; // заменены на латинские x, y
    cout << "\n поочередно введите х и у \n";
    cin >> x >> y; // исправлено на латинские x, y
    z = max_val(x, y); // вызов функции
    cout << "z=" << z;




    setlocale(LC_ALL, "Rus");
    double a, b, result;

    cout << "Введите числа a и b: ";
    cin >> a >> b;

    // вычисляем выражение, вызывая функцию g с разными параметрами
    result = g(1.2, a) + g(b, a) - g(2 * a - 1, a * b);

    cout << "Результат: " << result << endl;
    
    
    return 0; // возвращаем значение для int main

}
