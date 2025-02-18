#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> Mylist;
    Mylist.push_back(1);
    Mylist.push_back(2);
    Mylist.push_back(3);

    Mylist.push_front(0);

    for(int num:Mylist)
    {
        cout<<num<<" ";
    }
    cout<<endl;
    cout<<"Size of the list is: "<<Mylist.size()<<endl;

    reverse(Mylist.begin(),Mylist.end());
    for(int num:Mylist)
    {
        cout<<num<<" ";
    }
    cout<<endl;

    Mylist.insert(Mylist.begin(),0);
    for(int num:Mylist)
    {
        cout<<num<<" ";
    }
    cout<<endl;

    Mylist.erase(Mylist.begin());
    for(int num:Mylist)
    {
        cout<<num<<" ";
    }
    cout<<endl;

    Mylist.insert(++Mylist.begin(),0);
    for(int num:Mylist)
    {
        cout<<num<<" ";
    }
    cout<<endl;


    return 0;
}