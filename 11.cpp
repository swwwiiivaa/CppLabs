#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

// Механизм перегрузки: имя одно (mySwap), сигнатуры разные
void mySwap(int a, int b);       // Листинг 2: по значению (int)
void mySwap(int *a, int *b);     // Листинг 3: по адресу (указатели int*)
void mySwap(double &a, double &b); // Листинг 4: по ссылке (тип double, чтобы не было конфликта с int)

int* GetMem();
void PrintData(int *s, int N);
void PrintData(char *w);

struct Point {
    double x, y;
};

double HexagonArea(const Point *pts, int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        const Point &p1 = *(pts + i);              // текущая вершина
        const Point &p2 = *(pts + (i + 1) % n);    // следующая (замыкаем на 0)
        sum += p1.x * p2.y - p2.x * p1.y;
    }
    return fabs(sum) / 2.0;
}

int main() {
    // Листинг 2: Передача параметров по значению
    {
        int x, y;
        cout << "\nEnter two numbers (int): ";
        cin >> x >> y;
        cout << "\nx=" << x << ", y=" << y << endl;

        mySwap(x, y);            // Вызовется mySwap(int, int)

        cout << "\nx=" << x << ", y=" << y << endl;
    }

    // Листинг 3: Передача параметров по адресу/указателю
    {
        int x, y;
        cout << "\nEnter two numbers (int): ";
        cin >> x >> y;
        cout << "\nx=" << x << ", y=" << y << endl;

        mySwap(&x, &y);          // Вызовется mySwap(int*, int*)

        cout << "\nx=" << x << ", y=" << y << endl;
    }

    // Листинг 4: Передача параметров по ссылке
    {
        double x, y; // Используем double, чтобы перегрузка mySwap корректно распознала ссылку
        cout << "\nEnter two numbers (double): ";
        cin >> x >> y;
        cout << "\nx=" << x << ", y=" << y;

        mySwap(x, y);            // Вызовется mySwap(double&, double&)

        cout << "\nx=" << x << ", y=" << y << endl;
    }

    // Листинг 5: Возвращение параметров из функции (Динамическая память)
    {
        int *a = GetMem();
        cout << "\n a is "  << a;
        cout << "\n*a is "  << *a;
        cout << endl;

        delete a;              // освободить
    }

    // Листинг 6: Использование механизма перегрузки функций
    {
        int *a, n;
        char str[50]; 

        cout << "\nEnter the array size: ";
        cin >> n;

        a = new int[n];
        for (int i = 0; i < n; i++) a[i] = rand() % 101 - 50;

        PrintData(a, n);                       // вызов №1: int*, int

        cout << "\nEnter a string: ";
        cin >> str;
        PrintData(str);                        // вызов №2: char*

        delete[] a;
    }

    // Задание 2: Вычисление площади выпуклого шестиугольника
    {
        const int n = 6;
        Point hex[n];

        cout << "Введите координаты 6 вершин шестиугольника (x y):\n";
        for (int i = 0; i < n; i++) {
            cout << "Вершина " << i + 1 << ": ";
            cin >> hex[i].x >> hex[i].y;
        }

        cout << fixed << setprecision(2);
        cout << "\nКоординаты вершин:\n";
        for (int i = 0; i < n; i++)
            cout << "  Vertex))" << i + 1 << " = (" << hex[i].x
                 << "; " << hex[i].y << ")\n";

        double S = HexagonArea(hex, n);
        cout << "\nПлощадь выпуклого шестиугольника S = " << S << endl;
    }

    return 0;
}

// Реализация перегруженных функций mySwap
void mySwap(int a, int b) {
    int c;
    c = a;
    a = b;
    b = c;
    return;
}

void mySwap(int *a, int *b) {
    int c;
    c  = *a;               // значение по адресу x
    *a = *b;               // в x кладём y
    *b = c;                // в y кладём старое x
    return;
}

void mySwap(double &a, double &b) {
    double c;
    c = a;
    a = b;
    b = c;
    return;
}

int* GetMem() {
    int *c = new int(5);   // память в куче а не стекен типо динамика1
    return c; // Правильный возврат динамики а не int c = чето return &c нельзя
}

// Реализация перегруженных функций PrintData
void PrintData(int *s, int N) {
    cout << endl;
    for (int i = 0; i < N; i++) cout << s[i] << "  ";
    return;
}

void PrintData(char *w) {
    cout << endl << w;
    return;
}
