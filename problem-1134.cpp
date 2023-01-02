#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,g=0,d=0;
    while(cin>>n)
    {
        if(n==1){
            a++;
            continue;
        }
        else if(n==2){
            g++;
            continue;
        }
        else if(n==3){
            d++;
            continue;
        }
        else if(n==4) break;
        else continue;
    }
    cout<<"MUITO OBRIGADO\n";
    cout<<"Alcool: "<<a<<"\n";
    cout<<"Gasolina: "<<g<<"\n";
    cout<<"Diesel: "<<d<<"\n";
    return 0;
}
