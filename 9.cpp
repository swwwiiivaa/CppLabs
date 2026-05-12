#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));

    const int N = 20;
    int A[N];

    // 1. Формирование массива A[20] в отрезке [-50, 50]
    cout << "Исходный массив:" << endl;
    for (int i = 0; i < N; i++) {
        A[i] = rand() % 101 - 50; 
        cout << A[i] << " ";
    }
    cout << endl;

    // 2. Линейный поиск заданного элемента
    int target, foundIndex = -1;
    cout << "\nВведите число для поиска: ";
    cin >> target;

    for (int i = 0; i < N; i++) {
        if (A[i] == target) {
            foundIndex = i;
            break; 
        }
    }

    if (foundIndex != -1)
        cout << "Элемент найден на позиции (индекс): " << foundIndex << endl;
    else
        cout << "Элемент не найден." << endl;

    // 3. Сортировка методом выбора (Selection Sort)
    for (int i = 0; i < N - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < N; j++) {
            if (A[j] < A[min_idx]) {
                min_idx = j;
            }
        }
        // Обмен значениями
        int temp = A[min_idx];
        A[min_idx] = A[i];
        A[i] = temp;
    }

    // Вывод отсортированного массива
    cout << "\nОтсортированный массив (метод выбора):" << endl;
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
