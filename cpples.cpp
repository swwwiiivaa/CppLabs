#include <iostream>
using namespace std;

void funcNew(int size){
    // int staticArray[10];

    // int* dynamicArray = new int[size];

    // int* secondElement = (dynamicArray + 1);
    // int* thirdElement = (dynamicArray + 2);

    // dynamicArray[0] = 10;
    // *(secondElement) = 5;
    // *(thirdElement) = 15;

    // for (int i = 0; i < size; i++){
    //     cout << dynamicArray[i] << endl;
    // }

    // delete dynamicArray;


    int localVar = 10;
    int localVar2 = 20;
    cout << localVar << endl;
    int* localPointer = &localVar;
    cout << localVar << endl;
    *(localPointer) = 4;
    cout << localVar << endl;


    int* localPointer2  = localPointer;
    cout << localPointer << endl;
    cout << localPointer2 << endl;
    localPointer2 = nullptr;
    localPointer2 = &localVar2;
    cout << localPointer << endl;
    cout << localPointer2 << endl;
}

// void funcMalloc(int size){
//     void* voidArrray = (int*)malloc(sizeof(int) * 10);
//     int* intArray = (int*)voidArrray;
//     intArray[0] = 10;
//     for (int i = 0; i < size; i++){
//         cout << intArray[i] << endl;
//     }
//     free(voidArrray);
// }

int main(){

    funcNew(10);

    cout << "--------------new--------------\n";
    // funcMalloc(10);
    return 0;
}