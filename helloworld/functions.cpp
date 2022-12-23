#include "list.h"

void add_person(vector<Person>& person_list)
{
    Person person;
    string gender_temp="";
    int age=0;
    char temp[20];

    LOG("Last name :");
    cin.getline(temp, 20);
    person.last_name = temp;
    LOG("First name :");
    cin.getline(temp, 20);
    person.first_name = temp;

    while (gender_temp != "Male" && gender_temp != "Female")
    {
        LOG("Gender (Male || Female) : ");
        getline(cin, gender_temp);
        LOG(gender_temp);
    }
    person.gender = gender_temp;
    
    while (age <= 0)
    {
        LOG("Age : ");
        cin >> age; 
    }
    person.age = age;

    LOG("Address :");
    cin.ignore();
    getline(cin, person.address); 

    person_list.push_back(person);

    LOG("\n"+ person.last_name + " added");
}

void show_list(vector<Person>& person_list)
{
    string s = "No | Last Name | First Name | Gender | Age | Address |\n";

    for (int i=0;  i < person_list.size(); i++)
    {
        s += to_string(i+1) + "   ";
        s += person_list[i].last_name + "   ";
        s += person_list[i].first_name + "   ";
        s += person_list[i].gender + "   ";
        s += to_string(person_list[i].age) + "   ";
        s += person_list[i].address + "\n_____________________________________________________\n";
    }

    LOG("\n***************************PRINTING***************************\n" + s);
}

void add_person(vector<Person>& person_list)
{
    Person person;
    string gender_temp="";
    int age=0;
    char temp[20];

    LOG("Last name :");
    cin.getline(temp, 20);
    person.last_name = temp;
    LOG("First name :");
    cin.getline(temp, 20);
    person.first_name = temp;

    while (gender_temp != "Male" && gender_temp != "Female")
    {
        LOG("Gender (Male || Female) : ");
        getline(cin, gender_temp);
        LOG(gender_temp);
    }
    person.gender = gender_temp;
    
    while (age <= 0)
    {
        LOG("Age : ");
        cin >> age; 
    }
    person.age = age;

    LOG("Address :");
    cin.ignore();
    getline(cin, person.address); 

    person_list.push_back(person);

    LOG("\n"+ person.last_name + " added");
}

void show_list(vector<Person>& person_list)
{
    string s = "No | Last Name | First Name | Gender | Age | Address |\n";

    for (int i=0;  i < person_list.size(); i++)
    {
        s += to_string(i+1) + "   ";
        s += person_list[i].last_name + "   ";
        s += person_list[i].first_name + "   ";
        s += person_list[i].gender + "   ";
        s += to_string(person_list[i].age) + "   ";
        s += person_list[i].address + "\n_____________________________________________________\n";
    }

    LOG("\n***************************PRINTING***************************\n" + s);
}