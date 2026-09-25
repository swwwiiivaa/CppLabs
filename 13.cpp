// Задание 1
#include <iostream>
using namespace std;

int main()
{
    char Arr1[25];
    char Arr2[] = {"Second string!"};
    char Arr3[] = {'T','h','i','r','d',' ',
                   's','t','r','i','n','g'};
    // char Arr3[] = {'T','h','i','r','d',' ',
    //            's','t','r','i','n','g','\0'};
    char *Arr4 = "Fouth string";

    cout << "\nEnter string: \"First string\": ";
    cin >> Arr1;

    cout << "\nString 1: " << Arr1; // Оператор 1
    cout << "\nString 2: " << Arr2; // Оператор 2
    cout << "\nString 3: " << Arr3; // Оператор 3
    cout << "\nString 4: " << Arr4; // Оператор 4

    return 0;
}
// Задание 2
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    char str[] = "2, 75.3, 24.45, 55, 0, 0.37";
    char *ptr = str;
    float Arr[10];
    int i = 0;

    printf("\nИсходная строка:\n%s\n", str);

    while (*ptr != '\0' && i < 10) {
        Arr[i++] = atof(ptr);            // читаем число
        ptr = strchr(ptr, ',');          // ищем следующую запятую
        if (ptr == NULL) break;          // больше нет
        ptr++;                           // перескакиваем запятую
    }

    printf("\nМассив чисел:\n");
    for (int s = 0; s < i; s++)
        printf("%5.2f\n", Arr[s]);

    return 0;
}