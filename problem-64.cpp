#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a[6],b=0,c=0;
    for(int i=0; i<6; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<6; i++)
    {
        if(a[i]>0)
        {
            b+=1;
            c=a[i]+c;
        }
    }
    cout<<b<< " valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<c/b<<endl;

}
