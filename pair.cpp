#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    pair<int,double> p1(1,3.14);
    pair<char,string> p2('a',"hello");

    cout<<p1.first<<", "<<p1.second<<endl;
    cout<<p2.first<<", "<<p2.second<<endl;
    
    return 0;
}
