#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Person
{
    string name;
    string firstName;
    int age;
    string gender;
    string occupation;
    string address;

    void LOG()
    {
        cout << "Last Name : "<< name <<endl;
        cout << "First Name: "<< firstName <<endl;
        cout << "Age       : "<< age <<endl;
        cout << "Gender    : "<< gender <<endl;
        cout << "Occupation: "<< occupation <<endl;
        cout << "Address   : "<< address <<endl;
    }    
};

int main()
{
    vector<Person> list;
    Person p;
    int n;

    cout << "Number of person :" <<endl;
    cin >>  n;

    for (int i = 0; i < n; i++)
    {
        cout << "Last Name :" <<endl;
        cin >> p.name;

        cout << "First Name :" <<endl;
        cin >> p.firstName;
        
        cout << "Age :" <<endl;
        cin >> p.age;

        cout << "Gender :" <<endl;
        cin >> p.gender;
        
        cout << "Occupation :" <<endl;
        cin >> p.occupation;
        
        cout << "Address :" <<endl;
        cin >> p.address;

        list.push_back(p);
    }

    cout << "LISTING DATA ...\n\n" <<endl;    

    for (int i=0; i < n; i++)
    {
        list[i].LOG();
    }
}
