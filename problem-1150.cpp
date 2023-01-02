#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,z,sum,a;
    sum=a=0;
    cin>>x;
    while(cin>>z)
    {
        if(z<=x) continue;
        for(int i=x; i<z; i++)
        {
            sum=sum+i;
            a++;
            if(sum>z) break;
        }
        if(sum>z) break;
    }
    cout<<a<<"\n";
}
