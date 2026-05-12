// 1 задание
#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 4;
    int matrix[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Преобразование (реверс каждой строки)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols / 2; j++) {
            // Меняем местами элементы: j и (последний - j)
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][cols - 1 - j];
            matrix[i][cols - 1 - j] = temp;
        }
    }

    // Вывод результата
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}


// 2 задание
// #include <iostream>
// #include <iomanip>
// #include <cmath>
// #include <ctime>

// using namespace std;

// const int N = 3;

// // Вспомогательная функция для вывода матриц
// void printMatrix(const char* name, double m[N][N]) {
//     cout << "--- Матрица " << name << " ---" << endl;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             cout << setw(10) << fixed << setprecision(3) << m[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

// // Определитель матрицы 3x3
// double getDeterminant(double m[N][N]) {
//     return m[0][0] * (m[1][1] * m[2][2] - m[1][2] * m[2][1]) -
//            m[0][1] * (m[1][0] * m[2][2] - m[1][2] * m[2][0]) +
//            m[0][2] * (m[1][0] * m[2][1] - m[1][1] * m[2][0]);
// }

// // Обратная матрица
// void inverseMatrix(double m[N][N], double res[N][N]) {
//     double det = getDeterminant(m);
//     if (abs(det) < 1e-9) return;
//     double invDet = 1.0 / det;
//     res[0][0] = (m[1][1] * m[2][2] - m[1][2] * m[2][1]) * invDet;
//     res[0][1] = (m[0][2] * m[2][1] - m[0][1] * m[2][2]) * invDet;
//     res[0][2] = (m[0][1] * m[1][2] - m[0][2] * m[1][1]) * invDet;
//     res[1][0] = (m[1][2] * m[2][0] - m[1][0] * m[2][2]) * invDet;
//     res[1][1] = (m[0][0] * m[2][2] - m[0][2] * m[2][0]) * invDet;
//     res[1][2] = (m[1][0] * m[0][2] - m[0][0] * m[1][2]) * invDet;
//     res[2][0] = (m[1][0] * m[2][1] - m[1][1] * m[2][0]) * invDet;
//     res[2][1] = (m[2][0] * m[0][1] - m[0][0] * m[2][1]) * invDet;
//     res[2][2] = (m[0][0] * m[1][1] - m[1][0] * m[0][1]) * invDet;
// }

// int main() {
//     setlocale(LC_ALL, "Rus");
//     srand(time(0));

//     double A[N][N], B[N][N], Sum[N][N], Trans[N][N], Inv[N][N], Mult[N][N];

//     // 1. Формирование матриц A и B
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             A[i][j] = (rand() % 20001 / 1000.0) - 10.0; // [-10, 10]
//             double i_val = i + 1.0;
//             double j_val = j + 1.0;
//             B[i][j] = (i_val + log(4.0 + j_val)) / (2.0 * i_val + 3.0);
//         }
//     }

//     // 2. Сумма A + B
//     for (int i = 0; i < N; i++)
//         for (int j = 0; j < N; j++)
//             Sum[i][j] = A[i][j] + B[i][j];

//     // 3. Транспонирование (A + B)^T
//     for (int i = 0; i < N; i++)
//         for (int j = 0; j < N; j++)
//             Trans[i][j] = Sum[j][i];

//     // 4. Обратная матрица (A + B)^-1
//     inverseMatrix(Sum, Inv);

//     // 5. Произведение (A + B) * (A + B)^T
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             Mult[i][j] = 0;
//             for (int k = 0; k < N; k++)
//                 Mult[i][j] += Sum[i][k] * Trans[k][j];
//         }
//     }

//     // Вывод результатов
//     printMatrix("A", A);
//     printMatrix("B", B);
//     printMatrix("A + B", Sum);
//     printMatrix("(A + B)^-1", Inv);
//     printMatrix("(A + B)^T", Trans);
//     printMatrix("(A + B) * (A + B)^T", Mult);

//     return 0;
// }
