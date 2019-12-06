#ifndef INT_H
#define INT_H

#include <iostream>

using namespace std;

class Int {
private:
    int x;
public:
    Int () {x = 1;}
    friend istream & operator >> (istream & is, Int & ob);
    friend ostream &operator << (ostream & os, Int &ob);
    friend Int operator + (const Int &firstOb, const Int &secondOb);
    friend Int operator - (const Int &firstOb, const Int &secondOb);
    friend Int operator * (const Int &firstOb, const Int &secondOb);
    friend Int operator / (const Int &firstOb, const Int &secondOb);
    friend Int operator % (const Int &firstOb, const Int &secondOb);
  /*  friend Int operator ++ (const Int &firstOb);
    friend Int operator -- (const Int &firstOb);
    friend Int operator += (const Int &firstOb, const Int &secondOb);
    friend Int operator -= (const Int &firstOb, const Int &secondOb);
    friend Int operator /= (const Int &firstOb, const Int &secondOb);
    friend Int operator *= (const Int &firstOb, const Int &secondOb);
    friend Int operator %= (const Int &firstOb, const Int &secondOb);*/
};


#endif //INT_H
