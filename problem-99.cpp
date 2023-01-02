#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,sum=0;
    cin>>n;
    for(int i=1;i<=n; i++)
    {
        cin>>x>>y;
        if(x<y)
        {
            for(int i=x+1; i<y; i++)
            {
                if(i%2!=0) sum+=i;
            }
            cout<<sum<<endl;
        }
        else if((x==y) || (x==0 && y==0))
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=y+1; i<x; i++)
            {
                if(i%2!=0) sum+=i;
            }
            cout<<sum<<endl;
        }
        sum=0;
    }
}
