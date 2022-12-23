#include <iostream>
#include <map>
#include <vector>


struct Person {
    std::string name;
    int age;
    std::string address; 
};


int main()
{
    std::map<std::string, Person> team_player;
    team_player["Neil"] = Person {"Neil Rigaud", 22, "Taoyuan, Zhongli District"};
    team_player["Peter"] = Person {"Peter David", 42, "New Jersey"};
    team_player["Edward"] = Person {"Edward Carter", 29, "Colorado"};
    team_player["Michael"] = Person {"Michael Jones", 32, "Taipei City"};

    if (team_player.find("Peter") != team_player.end())
    {
        printf("Found");
    }



}