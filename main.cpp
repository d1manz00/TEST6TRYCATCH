/*Определите класс Int, который ведет себя как встроенный тип int,
только он еще генерирует исключения в случаях переполнения*/
#include <iostream>
#include "Int.h"

using namespace std;

int main() {
    Int x, y, res;
    cout << "Enter x, y:" <<endl;
    cin >> x >> y;
    cout << "sum, sub, mul, div and %:" << endl;
    res = x+y;
    cout << res <<endl;
    res = x - y;
    cout << res <<endl;
    res = x * y;
    cout << res <<endl;
    res = x / y;
    cout << res <<endl;
    res = x % y;
    cout << res <<endl;
   /* cout << "Some behavior: x+=y, x-=y, x*=y, x/=y, x%=y" <<endl;
    res = x+=y;
    cout << res <<endl;
    res = x-=y;
    cout << res <<endl;
    res = x*=y;
    cout << res <<endl;
    res = x/=y;
    cout << res <<endl;
    res = x%=y;
    cout << res <<endl;
  //  cout << "Increment and decrement:" <<endl;*/
    return 0;
}