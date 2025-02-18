#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

struct Compare{
    bool operator()(const int& a, const int& b) const {
        return a>b;
    }
};

int main()
{
    set<int,Compare> myset;

    myset.insert(25);
    myset.insert(14);
    myset.insert(31);
    myset.insert(5);
    myset.insert(29);

    for(const auto& elem:myset)
    {
        cout<<elem<<" ";
    }
    cout<<endl;

    int searchValue=5;
    auto it =myset.find(searchValue);
    if(it!=myset.end())
    {
        cout<<searchValue<<" found in the set."<<endl;
    }
    else
    {
        cout<<searchValue<<" not found in the set."<<endl;
    }

    multiset<int,Compare> myMset;
    myMset.insert(25);
    myMset.insert(29);
    myMset.insert(5);
    myMset.insert(5);
    myMset.insert(29);

    int removeValue=29;
    myMset.erase(myMset.find(29));

    for(const auto& elem:myMset)
    {
        cout<<elem<<" ";
    }
    cout<<endl;

    myMset.clear();
    if(myMset.empty())
    {
        cout<<"empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }
    return 0;
}