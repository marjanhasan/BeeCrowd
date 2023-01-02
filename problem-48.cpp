#include <bits/stdc++.h>

using namespace std;

int main() {

    while(1)
    {
        float n,sum,increase;
    cin>>n;

    if(0>n || n<=400)
    {
        increase= n * 15 /100;
        sum=n+increase;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<sum<<endl<<"Reajuste ganho: "<<fixed<<setprecision(2)<<increase<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if(400>n || n<=800)
    {
        increase= n * 12 /100;
        sum=n+increase;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<sum<<endl<<"Reajuste ganho: "<<fixed<<setprecision(2)<<increase<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
    else if(800>n || n<=1200)
    {
        increase= n * 10 /100;
        sum=n+increase;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<sum<<endl<<"Reajuste ganho: "<<fixed<<setprecision(2)<<increase<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
    else if(1200>n || n<=2000)
    {
        increase= n * 7 /100;
        sum=n+increase;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<sum<<endl<<"Reajuste ganho: "<<fixed<<setprecision(2)<<increase<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
    else if(n>2000)
    {
        increase= n * 4 /100;
        sum=n+increase;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<sum<<endl<<"Reajuste ganho: "<<fixed<<setprecision(2)<<increase<<endl;
        cout<<"Em percentual: 4 %"<<endl;
    }
    }

    return 0;
}
