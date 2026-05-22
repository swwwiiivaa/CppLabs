// #include <iostream>
// #include <time.h>
// #include <stdlib.h>
// #include <clocale>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     setlocale(LC_ALL, "Rus");
//     srand(time(0));

//     const int N = 20;
//     int A[N];

//     // 1
//     cout << "Исходный массив:" << endl;
//     for (int i = 0; i < N; i++) {
//         A[i] = rand() % 101 - 50; 
//         cout << A[i] << " ";
//     }
//     cout << endl;

//     // 2
//     int target, foundIndex = -1;
//     cout << "\nВведите число для поиска: ";
//     cin >> target;

//     for (int i = 0; i < N; i++) {
//         if (A[i] == target) {
//             foundIndex = i;
//             break; 
//         }
//     }

//     if (foundIndex != -1)
//         cout << "Элемент найден на позиции (индекс): " << foundIndex << endl;
//     else
//         cout << "Элемент не найден." << endl;

//     // 3. Сортировка методом выбора
//     for (int i = 0; i < N - 1; i++) {
//         int min_idx = i;
//         for (int j = i + 1; j < N; j++) {
//             if (A[j] < A[min_idx]) {
//                 min_idx = j;
//             }
//         }
//         int temp = A[min_idx];
//         A[min_idx] = A[i];
//         A[i] = temp;
//     }

//     cout << "\nОтсортированный массив: " << endl;
//     for (int i = 0; i < N; i++) {
//         cout << A[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


//4
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    srand(time(0));

    const int N = 20;
    int A[N];

    // 1. Генерация массива [-50, 50]
    for (int i = 0; i < N; i++) {
        A[i] = rand() % 101 - 50; 
        cout << A[i] << " ";
    }
    cout << endl;

    // 2. Сортировка (обязательно для бинарного поиска)
    sort(A, A + N);

    cout << "Отсортированный: ";
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    // 3. Бинарный поиск
    int target, left = 0, right = N - 1, foundIndex = -1;
    
    cout << "Введите число для поиска: ";
    cin >> target;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (A[mid] == target) {
            foundIndex = mid;
            break;
        }
        else if (A[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (foundIndex != -1) 
        cout << "Элемент найден на индексе: " << foundIndex << endl;
    else 
        cout << "Элемент не найден." << endl;

    return 0;
}

