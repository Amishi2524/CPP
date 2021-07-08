// To check whether the user is eligible to vote or not
#include<iostream>
using namespace std;
int main()
{
    string name;
    int age;
    cout << endl << endl << "***************************" << endl <<endl;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    if (age>=18)
    {
        cout << endl << "Congratulations "<<name << "! You ARE ELIGIBLE to cast your vote in the upcoming elections!";
    }
    else
    {
        cout << endl << "Sorry "<< name << ", you ARE NOT ELIGIBLE to cast your vote for the upcoming elections.\nYou will become eligible in "<< 18-age << " more years."; 
    }
    cout << endl << endl << "***************************" << endl <<endl;
    return 0;
}