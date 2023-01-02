#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        if(y!=0) cout<<fixed<<setprecision(1)<<(float)x/y<<"\n";
        else cout<<"divisao impossivel\n";
    }
}
