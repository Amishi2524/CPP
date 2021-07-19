//Write a C++ program to Check Whether a Number can be Express as Sum of Two Prime Numbers.
#include<iostream>
using namespace std;

void header();
int prime(int a);

int main()
{
    header();
    int n,i;
    cout <<"Enter a number: ";
    cin >> n;
    for (i=2;i<=n/2;i++)
    {
        if(prime(i))
        {
            if(prime(n-i))
            {
                cout << n <<" = "<< i <<" + "<< n-i <<endl;
            }
        }
    }
    header();
}

void header()
{
    cout << "******************************\n";
}

int prime(int a)
{
    int j, count =0;
    for (j=1;j<=a;j++)
    {
       if (a%j==0)
        count ++;
    }
    if (count == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}