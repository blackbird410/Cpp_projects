#include <iostream>
#include <string>
#include <vector>
#include<algorithm>


using namespace std;

// I want to sort a vector

int main ()
{
    vector<std::string> names = {"Paul", "Edward", "Alex"};
    
    std::sort(names.begin(),names.end());

    for(int i=0; i < names.size(); i++)
    {
        std::cout << names[i] <<endl;
    }
}