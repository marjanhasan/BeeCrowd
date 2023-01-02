#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    string name;
    double salary, sales, comission;
    cin>>name>>salary>>sales;
    comission=salary+ (sales * 15)/100;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<comission<<endl;
    return 0;
}
