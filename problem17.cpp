#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int time, speed;
    double litres;
    cin>>time>>speed;
    litres= (time * speed) / 12.0 ;
    cout<<fixed<<setprecision(3)<<litres<<endl;
    return 0;
}
