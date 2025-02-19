#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
using ll=long long;

int main()
{
    vector<int> seq;
    ll ans=0;
    int n; cin>>n;
    for(int i=1;i<=n;i++)
    {
        seq.push_back(i);
    }

    while(next_permutation(seq.begin(),seq.end()))
    {
        int flag=1;
        int cnt=1;
        for(int it:seq)
        {
            if(!(it-cnt))
            {
                flag=0;
                break;
            }
            cnt++;
        }
        if(flag)
        {
            ans++;
        }
    }
    cout<<ans;
}