#include<bits/stdc++.h>
using namespace std;
int main()
{

    float n, t;
    cin>>n;

    if(2000.01<=n && n<=3000.00)
    {
        t=n-2000;
        cout<<"R$ "<<fixed<<setprecision(2)<<(t*0.08)<<endl;
    }
    else if(3000.01<=n && n<=4500.00)
    {
        t=n-3000;
        cout<<"R$ "<<fixed<<setprecision(2)<<((1000*0.08)+(t*0.18))<<endl;
    }
    else if(n>4500.00)
    {
        t=n-4500;
        cout<<"R$ "<<fixed<<setprecision(2)<<((1000*0.08)+(1500*0.18)+(t*0.28))<<endl;
    }
    else
    {
        cout<< "Isento"<<endl;
    }
    return 0;
}
