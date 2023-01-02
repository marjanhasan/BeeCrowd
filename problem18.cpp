#include<iostream>
using namespace std;
int main(){
    int amount, notes;
    cin>>amount;
    cout<<amount<<endl;
    cout<<amount/100<< " nota(s) de R$ 100,00"<<endl;
    notes=amount%100;
    cout<<notes/50<< " nota(s) de R$ 50,00"<<endl;
    notes=notes%50;
    cout<<notes/20<< " nota(s) de R$ 20,00"<<endl;
    notes=notes%20;
    cout<<notes/10<< " nota(s) de R$ 10,00"<<endl;
    notes=notes%10;
    cout<<notes/5<< " nota(s) de R$ 5,00"<<endl;
    notes=notes%5;
    cout<<notes/2<< " nota(s) de R$ 2,00"<<endl;
    notes=notes%2;
    cout<<notes/1<< " nota(s) de R$ 1,00"<<endl;
    notes=notes%1;
    return 0;
}
