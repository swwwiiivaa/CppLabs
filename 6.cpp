#include <iostream>
#include <cstdlib>
using namespace std;

int LengthCounter(int n){
    if (n < 10){
        return 1;
    }
    else{
        div_t result = div(n, 10);
        return LengthCounter(result.quot) + 1;
    }
}

int main(){
    cout << LengthCounter(22220) << endl;
    return 0;
}