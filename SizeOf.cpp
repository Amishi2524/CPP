// to find the size of int, float, double and char 
#include<iostream>
using namespace std;
int main()
{
    int Integer;
    float Float;
    double Double;
    char Char;
    cout << "**************************************" << endl;
    cout << "Size of int is : " << sizeof(Integer) << endl;
    cout << "Size of float is : " << sizeof(Float) << endl;
    cout << "Size of double is : " << sizeof(Double) << endl;
    cout << "Size of char is : " << sizeof(Char) << endl;
    cout << "**************************************" << endl;
    return 0;
}