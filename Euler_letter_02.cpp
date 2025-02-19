#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
using ll=long long;

vector<ll> letter(100,-1);

ll derangement(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else if(n>2)
    {
        return (n-1)*(derangement(n-1)+derangement(n-2));
    }
    else
    {
        return -1;
    }

}


int main()
{
    int n; cin>>n;
    if(derangement(n)>=0)
    {
        cout<<derangement(n);
    }
    else
    {
        cout<<"error";
    }
    return 0;
}
