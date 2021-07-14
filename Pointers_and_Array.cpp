#include<iostream>
using namespace std;
int main()
{
    int *b,n,i;
    int a[50]; 
    cout << "Enter the number of elements needed: ";
    cin>>n;
    b = a; 
    cout<<"Enter " << n << " elements: " << endl;
    for(i=0; i<n;i++)
    { 
        cout<<"Enter element :";
        cin>>a[i];
    } 
    cout << "\nThe elements you have entered are: \n";
    for(i=0; i<n;i++)
    { 
        cout<<*b<<endl; 
        b++; 
    } 
    return 0; 
}