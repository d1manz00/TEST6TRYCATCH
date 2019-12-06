#include <c++/4.8.3/stdexcept>
#include "Int.h"

istream & operator >> (istream & is, Int & ob)
{
    try {
        long int a;
        is >> a;
        if ((a >= 100000000) || (a <= -10000000)) throw runtime_error ("much/little in input");
        else ob.x = a;
    }
    catch (const exception&error)
    {
        cout<<error.what()<<endl;
        cout << "using x, y = 1 as default" <<endl;
        return is;
    }
    return is;
}
ostream &operator << (ostream & os, Int &ob)
{
    os << ob.x;
    return os;
}
Int operator + (const Int &firstOb, const Int &secondOb)
{
    Int result;
    try {
        long int a = firstOb.x + secondOb.x;
        if ((a >= 100000000) || (a <= -10000000)) throw runtime_error ("much/little in add");
        else result.x = firstOb.x + secondOb.x;
    }
    catch (const exception&error)
    {
        cout<<error.what()<<endl;
        return result;
    }
    return result;
}
Int operator - (const Int &firstOb, const Int &secondOb)
{
    Int result;
    try {
        long int a = firstOb.x - secondOb.x;
        if ((a >= 100000000) || (a <= -10000000)) throw runtime_error ("much/little in sub");
        else result.x = firstOb.x - secondOb.x;
    }
    catch (const exception&error)
    {
        cout<<error.what()<<endl;
        return result;
    }
    return result;
}
Int operator * (const Int &firstOb, const Int &secondOb)
{
    Int result;
    try {
        long int a = firstOb.x * secondOb.x;
        if ((a >= 100000000) || (a <= -10000000)) throw runtime_error ("much/little in mul");
        else result.x = firstOb.x * secondOb.x;
    }
    catch (const exception&error)
    {
        cout<<error.what()<<endl;
        return result;
    }
    return result;
}
Int operator / (const Int &firstOb, const Int &secondOb)
{
    Int result;
    try {
        long int a = firstOb.x / secondOb.x;
        if ((a >= 100000000) || (a <= -10000000)) throw runtime_error ("much/little in div");
        else result.x = firstOb.x / secondOb.x;
    }
    catch (const exception&error)
    {
        cout<<error.what()<<endl;
        return result;
    }
    return result;
}
Int operator % (const Int &firstOb, const Int &secondOb)
{
    Int result;
    try {
        long int a = firstOb.x % secondOb.x;
        if ((a >= 100000000) || (a <= -10000000)) throw runtime_error ("much/little in mod");
        else result.x = firstOb.x % secondOb.x;
    }
    catch (const exception&error)
    {
        cout<<error.what()<<endl;
        return result;
    }
    return result;
}
/*
Int operator ++ (const Int &firstOb)
{
    Int result;
    result.x = firstOb.x + 1;
    return result;
}
Int operator -- (const Int &firstOb)
{
    Int result;
    result.x = firstOb.x - 1;
    return result;
}

Int operator += (const Int &firstOb, const Int &secondOb)
{
    firstOb.x = firstOb.x + secondOb.x;
    Int result;
    result.x = firstOb.x + secondOb.x;
    return firstOb;
}
Int operator -= (const Int &firstOb, const Int &secondOb)
{
    Int result;
    result.x = firstOb.x - secondOb.x;
    return result;
}
Int operator /= (const Int &firstOb, const Int &secondOb)
{
    Int result;
    result.x = firstOb.x / secondOb.x;
    return result;
}
Int operator *= (const Int &firstOb, const Int &secondOb)
{
    Int result;
    result.x = firstOb.x * secondOb.x;
    return result;
}
Int operator %= (const Int &firstOb, const Int &secondOb)
{
    Int result;
    result.x = firstOb.x % secondOb.x;
    return result;
}*/