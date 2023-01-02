#include<iostream>
using namespace std;
int main(){
    double amount;
    cin>>amount;

    int N=amount;// make the floating point into integer for solution purpose
    double O=amount-N;// try to get the actual decimal value from user input
    int M=O*100;// make the decimal value into integer for solution purpose again

    cout<< "NOTAS:"<<endl;
    cout<<N/100<< " nota(s) de R$ 100.00"<<endl;
    int notes=N%100;
    cout<<notes/50<< " nota(s) de R$ 50.00"<<endl;
    notes=notes%50;
    cout<<notes/20<< " nota(s) de R$ 20.00"<<endl;
    notes=notes%20;
    cout<<notes/10<< " nota(s) de R$ 10.00"<<endl;
    notes=notes%10;
    cout<<notes/5<< " nota(s) de R$ 5.00"<<endl;
    notes=notes%5;
    cout<<notes/2<< " nota(s) de R$ 2.00"<<endl;
    notes=notes%2;

    cout<< "MOEDAS:"<<endl;
    cout<<notes/1<< " moeda(s) de R$ 1.00"<<endl;
    notes=notes%1;
    cout<<M/50<< " moeda(s) de R$ 0.50"<<endl;
    M=M%50;
    cout<<M/25<< " moeda(s) de R$ 0.25"<<endl;
    M=M%25;
    cout<<M/10<< " moeda(s) de R$ 0.10"<<endl;
    M=M%10;
    cout<<M/5<< " moeda(s) de R$ 0.05"<<endl;
    M=M%5;
    cout<<M/1<< " moeda(s) de R$ 0.01"<<endl;
}
