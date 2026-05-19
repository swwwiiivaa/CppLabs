// // // 1.1 задание
// #include <iostream>
// #include <time.h>
// #include <stdlib.h>
// #include <clocale>

// using namespace std;

// int main()
// {
//     setlocale(LC_ALL, "Rus");
//     srand(time(0));
//     const int N = 10;
//     int Arr[N];
//     int sum = 0;

//     for (int i = 0; i < N; i++)
//     {
//         Arr[i] = rand() % 100;
//         cout << Arr[i] << "\t";
//     }

//     for (int i = 1; i < N; i += 2)
//         sum += Arr[i];

//     cout << "\nСумма = " << sum << endl;

//     return 0;
// }




// // 1.2 задание
// #include <iostream>
// #include <time.h>
// #include <stdlib.h>

// using namespace std;

// int main()
// {
//     time_t t;
//     srand((unsigned)time(&t));        
//     const int N = 10;
//     int Arr[N];
//     int sum = 0;                        
    
//     for (int i = 0; i < N; i++)
//     {
//         Arr[i] = rand() % 50;            
//         cout << Arr[i] << "\t";
//     }

//     for (int i = 0; i < N; i++)
//         if (Arr[i] % 3 == 0) sum += Arr[i]; 

//     cout << "\nSumma=" << sum << endl;
//     return 0;
// }





// // 1.3 задание
// #include <iostream>
// #include <time.h>
// #include <stdlib.h>
// #include <clocale>

// using namespace std;

// int main()
// {
//     setlocale(LC_ALL, "Rus");
//     srand(time(0));
//     const int N = 10;
//     int Arr[N];
//     int index[N] = {0};
//     int max, k = 0;

//     for (int i = 0; i < N; i++) {
//         Arr[i] = rand() % 100 - 50;
//         cout << Arr[i] << "\t";
//     }

//     max = Arr[0];
//     index[k] = 1;
//     k++;

//     for (int i = 1; i < N; i++) {
//         if (Arr[i] > max) {
//             max = Arr[i];
//             k = 0;
//             index[k] = i + 1;
//             k++;
//         } 
//         else if (Arr[i] == max) {
//             index[k] = i + 1;
//             k++;
//         }
//     }

//     for (int i = k; i < N; i++) index[i] = 0;

//     k = 0;
//     cout << "\nMax=" << max << "\nИндексы: ";
//     while (k < N && index[k] > 0) {
//         cout << index[k] - 1 << "\t";
//         k++;
//     }

//     return 0;
// }




// // 2 задание
// #include <iostream>
// using namespace std;

// int main(){
//     double count_zero = 0, count_positive = 0, count_negative = 0;
//     double sum_positive = 0, sum_negative = 0;
//     double lelele[10] = {1, 2, 3, -1, -2, -3, 0, 0, 0, 0};
//     for (int i = 0; i < 10; i++){
//         if (lelele[i] == 0){
//             count_zero++;
//         }
//         else if(lelele[i] > 0){
//             count_positive++;
//             sum_positive += lelele[i];
//         }
//         else {
//             count_negative++;
//             sum_negative += lelele[i];
//         }
//     }

//     double mid_positive = sum_positive / count_positive;
//     double mid_negative = sum_negative / count_negative;

//     cout << "кол-во нулей " << count_zero << endl;
//     cout << "ср. положительных: " << mid_positive << endl;
//     cout << "ср. отрицательных: " << mid_negative << endl;
//     return 0;
// }