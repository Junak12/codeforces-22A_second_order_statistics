#include<bits/stdc++.h>
using namespace std;
#define opt()ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    set<int>v;
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.insert(x);
    }
    if(v.size()==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int c=1;
        auto it=v.begin();//help of gfg
        for(int i=0; i<c; i++)
        {
            it++;
        }
        cout<<*it<<endl;
    }
}
