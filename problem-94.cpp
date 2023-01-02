#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, amount, rabbit=0, rat=0, frog=0;
    char animal;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>amount>>animal;
        if(animal=='C') rabbit+=amount;
        else if(animal=='R') rat+=amount;
        else if(animal=='S') frog+=amount;
    }
    cout<<"Total: "<<(rabbit+rat+frog)<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<rabbit<<endl;
    cout<<"Total de ratos: "<<rat<<endl;
    cout<<"Total de sapos: "<<frog<<endl;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<(rabbit*100.00)/(rabbit+rat+frog)<<" %"<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<(rat*100.00)/(rabbit+rat+frog)<<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<(frog*100.00)/(rabbit+rat+frog)<<" %"<<endl;
    return 0;
}
