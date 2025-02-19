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
    else
    {
        return (n-1)*(derangement(n-1)+derangement(n-2));
    }
}


int main()
{
    int n; cin>>n;
    cout<<derangement(n);
    return 0;
}
