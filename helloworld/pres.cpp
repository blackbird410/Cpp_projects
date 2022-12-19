#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    string address;
    int age = 0;

    cout << "What's your name ?\n";
    getline(cin,name);
    cout << "What's your age ?\n";
    cin >> age;
    cout << "Your address : ";
    cin >> address;

    cout << "Name : "<< name;
    cout << "\nAge :" << age;
    cout << "\nAddress :" << address ;
}
