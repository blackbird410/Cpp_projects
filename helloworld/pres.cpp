#include <iostream>
#include <string>
#include <sstream> 
#include  <bits/stdc++.h>

using namespace std;

int main()
{
    string player[4][4];
    int age = 0;
    string f_name;
    string address;

    for (int i=0; i < 4; i++)
    {
        cout << "\nPlayer " << i + 1 << "\n______________\n";
        cout << "Last name : ";
        cin >> player[i][0];

        cout << "First name :";
        cin.ignore();
        getline(cin, f_name);
        player[i][1] = f_name;

        cout << "Age : ";
        cin >> age;
        stringstream stream;
        stream << age;
        stream >> player[i][2];

        cout << "Address :";
        cin.ignore();
        getline(cin, address);
        player[i][3] = address;
        
        cout << "Data : (" << player[i][0] << ", " << player[i][1] << ", " << player[i][2] << ", " << player[i][3] << ")";
    }

    for (int i = 0; i < 4; i ++ )
    {
        cout << "\nPlayer " << i << " : ";
        cout << player[i][0] + " " +  player[i][1];
        cout << "\nAge : " << player[i][2];
        cout << "\nAddress : " << player[i][3];
    }


}
