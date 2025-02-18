#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

struct Person{
    string name;
    int age;
};

int main()
{
    vector<Person> people;

    people.push_back({"Alice",25});
    people.push_back({"Bob",30});
    people.push_back({"Charlie",20});

    vector<pair<Person,int>> scores;

    scores.push_back({people[0],90});
    scores.push_back({people[1],85});
    scores.push_back({people[2],95});

    for(const auto& pair:scores)
    //"&"的作用是引用pair，避免重复拷贝pair
    {
        cout<<"Name: "<<pair.first.name<<endl;
        cout<<"Age: "<<pair.first.age<<endl;
        cout<<"Score: "<<pair.second<<endl;
        cout<<endl;
    }
}