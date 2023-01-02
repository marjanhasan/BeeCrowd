#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double pi = 3.14159, R, v;
    cin>>R;
    v=(4.0/3) * pi * R * R * R;
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<v<<endl;
    return 0;
}
