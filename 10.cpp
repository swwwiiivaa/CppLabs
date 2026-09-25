// Первое задание
#include <iostream>
using namespace std;

int main()
{
    int a = 7, b = 2;
    int *ptr = NULL;

    cout << "\na=" << a << ", &a=" << &a;
    cout << ", b=" << b << ", &b=" << &b;

    ptr = &a;
    cout << "\nДействие: ptr=&a. Результат: ptr=" << ptr << ", *ptr=" << *ptr;

    ptr = &b;
    cout << "\nДействие: ptr=&b. Результат: ptr=" << ptr << ", *ptr=" << *ptr;

    *ptr = 137;
    cout << "\nДействие: *ptr=137. Результат: b=" << b;

    ptr++;   // или ptr += 2;
    *ptr = -105;
    cout << "\nДействие: ptr++, *ptr=-105. Результат: ptr="
         << ptr << ", *ptr=" << *ptr << endl;

    return 0;
}

// Второе задание
#include <iostream>
using namespace std;

// Минимальный элемент (через указатели)
double findMin(double *arr, int n) {
    double minVal = *arr;                 // arr[0]
    for (int i = 1; i < n; i++)
        if (*(arr + i) < minVal)          // arr[i]
            minVal = *(arr + i);
    return minVal;
}

// Сумма между первым и последним положительными
double sumBetweenPositives(double *arr, int n) {
    int firstPos = -1, lastPos = -1;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) > 0) {
            if (firstPos == -1) firstPos = i;
            lastPos = i;
        }
    }
    if (firstPos == -1 || firstPos == lastPos) return 0.0; // нет пары
    double sum = 0.0;
    for (int i = firstPos + 1; i < lastPos; i++)           // СТРОГО между
        sum += *(arr + i);
    return sum;
}

int main() {
    int n;
    cout << "n = "; cin >> n;

    double *arr = new double[n];          // динамический массив
    cout << "Введите " << n << " чисел:\n";
    for (int i = 0; i < n; i++) cin >> *(arr + i);

    cout << "Минимум: " << findMin(arr, n) << endl;
    cout << "Сумма между положительными: "
         << sumBetweenPositives(arr, n) << endl;

    delete[] arr;                         // освобождение памяти
    return 0;
}

// Третье задание
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand((unsigned)time(0));

    const int n = 22;          // > 20 и чётное, значит k = 11
    const int k = n / 2;

    double *x = new double[n];
    double *y = new double[n];

    // ---- Генерация x в диапазоне [-10, 10] ----
    cout << "Массив x:\n";
    for (int i = 0; i < n; i++) {
        // rand()%2001 -> 0..2000, /100.0 -> 0..20, -10 -> -10..10
        *(x + i) = -10.0 + (rand() % 2001) / 100.0;
        cout << fixed << setprecision(2) << setw(7) << *(x + i) << " ";
    }
    cout << "\n\n";

    // ---- Первая половина y: произведения нечётных x ----
    double prod = 1.0;
    for (int j = 0; j < k; j++) {
        prod *= *(x + 2*j + 1);      // домножаем x[1], x[3], x[5]...
        *(y + j) = prod;
    }

    // ---- Вторая половина y: произведения чётных x ----
    prod = 1.0;
    for (int j = 0; j < k; j++) {
        prod *= *(x + 2*j);          // домножаем x[0], x[2], x[4]...
        *(y + k + j) = prod;
    }

    // ---- Вывод y ----
    cout << "Массив y:\n";
    for (int i = 0; i < n; i++)
        cout << fixed << setprecision(2) << setw(10) << *(y + i) << " ";
    cout << "\n\n";

    // ---- Суммы ----
    double sumFirst = 0.0, sumLast = 0.0;
    for (int i = 0; i < k;  i++) sumFirst += *(y + i);
    for (int i = k; i < n;  i++) sumLast  += *(y + i);

    cout << "Сумма первых k = " << sumFirst << endl;
    cout << "Сумма последних k = " << sumLast  << endl;
    cout << "Разность = " << (sumFirst - sumLast) << endl;

    delete[] x;
    delete[] y;
    return 0;
}