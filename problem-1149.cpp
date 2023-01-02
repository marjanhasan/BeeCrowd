#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,sum=0;
    cin>>x>>n;
    while(n<0 || n==0) cin>>n;
        for(int i=0; i<n; i++)
        {
            sum=sum+x+i;
        }
        cout<<sum<<"\n";
        return 0;
}
