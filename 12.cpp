#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    char Arr1[25];
    char Arr2[] = {"Second string!"};
    char Arr3[] = {'T','h','i','r','d',' ','s','t','r','i','n','g','\0'}; // + \0 чтоп норм
    const char *Arr4 = "Fouth string";

    cout << "\nEnter string: \"First string\": ";
    cin >> Arr1;

    cout << "\nString 1: " << Arr1;
    cout << "\nString 2: " << Arr2;
    cout << "\nString 3: " << Arr3;
    cout << "\nString 4: " << Arr4;

    char str[] = "2, 75.3, 24.45, 55, 0, 0.37";
    char *ptr = str;
    float Arr[10];
    int i = 0;

    printf("\nИсходная строка:\n%s\n", str);

    while (*ptr != '\0' && i < 10) {
        Arr[i++] = atof(ptr); // Функция atof (ASCII to Float) берет текст, начиная с текущей позиции ptr, находит в нем число, переводит его из текстового формата в формат float и возвращает результат.
        ptr = strchr(ptr, ','); // ищет и дает номерок
        if (ptr == NULL) break; // strchr вернет если нет
        ptr++; // на новый элемент шлеп
    }

    printf("\nМассив чисел:\n");
    for (int s = 0; s < i; s++)
        printf("%5.2f\n", Arr[s]);

// ######################################################
// ######################################################
// ######################################################
        
    char words[] = "apple, banana, grape, orange, kiwi";
    char bad_char;

    cout << "\nИсходная строка слов: " << words << endl;
    cout << "Введите символ для удаления слов: ";
    cin >> bad_char;

    cout << "Результат: ";
    char *token = strtok(words, ", "); // режем строку на отдельные слова
    bool first = true;

    while (token != NULL) {
        if (strchr(token, bad_char) == NULL) { // если буквы нет в слове то ок
            if (!first) {
                cout << ", ";
            }
            cout << token; // выводим чистое слово
            first = false;
        }
        token = strtok(NULL, ", "); // шлеп на следующее слово
    }
    cout << endl;

    return 0;
}
