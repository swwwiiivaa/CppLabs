// // Листинг 2
// #include <iostream>
// using namespace std;

// void Swap(int a, int b);   // прототип

// int main() {
//     int x, y;
//     cout << "\nEnter two numbers: ";
//     cin >> x >> y;
//     cout << "\nx=" << x << ", y=" << y << endl;

//     Swap(x, y);            // передаются КОПИИ

//     cout << "\nx=" << x << ", y=" << y << endl;
//     return 0;
// }

// void Swap(int a, int b) {
//     int c;
//     c = a;
//     a = b;
//     b = c;
//     return;
// }
// // Листинг 3
// #include <iostream>
// using namespace std;

// void Swap(int *a, int *b);

// int main() {
//     int x, y;
//     cout << "\nEnter two numbers: ";
//     cin >> x >> y;
//     cout << "\nx=" << x << ", y=" << y << endl;

//     Swap(&x, &y);          // передаём АДРЕСА

//     cout << "\nx=" << x << ", y=" << y << endl;
//     return 0;
// }

// void Swap(int *a, int *b) {
//     int c;
//     c  = *a;               // значение по адресу x
//     *a = *b;               // в x кладём y
//     *b = c;                // в y кладём старое x
//     return;
// }
// // Листинг 3
// #include <iostream>
// using namespace std;

// void Swap(int *a, int *b);

// int main() {
//     int x, y;
//     cout << "\nEnter two numbers: ";
//     cin >> x >> y;
//     cout << "\nx=" << x << ", y=" << y << endl;

//     Swap(&x, &y);          // передаём АДРЕСА

//     cout << "\nx=" << x << ", y=" << y << endl;
//     return 0;
// }

// void Swap(int *a, int *b) {
//     int c;
//     c  = *a;               // значение по адресу x
//     *a = *b;               // в x кладём y
//     *b = c;                // в y кладём старое x
//     return;
// }
// // Листинг 4
// #include <iostream>
// using namespace std;

// void Swap(int &a, int &b);

// int main() {
//     int x, y;
//     cout << "\nEnter two numbers: ";
//     cin >> x >> y;
//     cout << "\nx=" << x << ", y=" << y;

//     Swap(x, y);            // синтаксис как по значению

//     cout << "\nx=" << x << ", y=" << y << endl;
//     return 0;
// }

// void Swap(int &a, int &b) {
//     int c;
//     c = a;
//     a = b;
//     b = c;
//     return;
// }
// // Листинг 5
// #include <iostream>
// using namespace std;

// int* GetMem();

// int main() {
//     int *a = GetMem();
//     cout << "\n a is "  << a;
//     cout << "\n*a is "  << *a;
//     cout << endl;

//     delete a;              // не забываем освободить!
//     return 0;
// }

// int* GetMem() {
//     int *c = new int(5);   // память в КУЧЕ
//     return c;
// }
// // Листинг 6
// #include <iostream>
// #include <cstdlib>
// using namespace std;

// void PrintData(int *s, int N);
// void PrintData(char *w);

// int main() {
//     int *a, n;
//     char str[50];

//     cout << "\nEnter the array size: ";
//     cin >> n;

//     a = new int[n];
//     for (int i = 0; i < n; i++) a[i] = rand() % 101 - 50;

//     PrintData(a, n);                       // вызов №1: int*, int

//     cout << "\nEnter a string: ";
//     cin >> str;
//     PrintData(str);                        // вызов №2: char*

//     delete[] a;
//     return 0;
// }

// void PrintData(int *s, int N) {
//     cout << endl;
//     for (int i = 0; i < N; i++) cout << s[i] << "  ";
//     return;
// }

// void PrintData(char *w) {
//     cout << endl << w;
//     return;
// }

// Задание 2
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

// Способ передачи: по указателю (по адресу).
// const — чтобы функция не могла испортить исходные данные.
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
        cout << "  V" << i + 1 << " = (" << hex[i].x
             << "; " << hex[i].y << ")\n";

    double S = HexagonArea(hex, n);
    cout << "\nПлощадь выпуклого шестиугольника S = " << S << endl;

    return 0;
}