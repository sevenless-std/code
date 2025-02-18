#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    map<int,string> mymap={{1,"Apple"},{2,"Banana"},{3,"Orange"}};

    mymap.insert(make_pair(4,"Grapes"));

    cout<<"Value at key 2: "<<mymap[2]<<endl;
    //mymap[2] is a value "Banana".

    for(const auto& pair:mymap)
    {
        cout<<"Key: "<<pair.first<<", Value: "<<pair.second<<endl;
    }

    mymap.erase(3);

    if(mymap.count(3)==0)
    {
        cout<<"Key 3 not found"<<endl;
    }

    mymap.clear();

    if(mymap.empty())
    {
        cout<<"Map is empty."<<endl;
    }

    multimap<int,string> mmap={{1,"Apple"},{2,"Banana"},{2,"Orange"}};
    auto range=mmap.equal_range(2);
    for(auto it=range.first;it!=range.second;++it)
    {
        cout<<"Key: "<<it->first<<", Value: "<<it->second<<endl;
    }
    return 0;
}