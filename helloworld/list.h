#include <iostream>
#include <vector>
#include <string>

#define LOG(x) cout << x <<endl;

struct Person {
    string last_name;
    string first_name;
    string gender;
    int age;
    string address;
    string phone_number;

};

using namespace std;

void add_person(vector<Person>& person_list);

void show_list(vector<Person>& person_list);
