#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y=5;
    while(cin>>x)
    {
        if(x==0) break;
        int sum,a;
        sum=a=0;
        while(1)
        {
            if(x%2==0)
            {
                sum+=x;
                a++;
            }
            x++;
            if(y==a) break;
        }
        cout<<sum<<"\n";
    }
}
