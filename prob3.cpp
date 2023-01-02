#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double A;
    double R;
    /*cout<< fixed;
    cout<< setprecision(2);*/
    cin>>R;
    A= 3.14159 * R * R;
    cout<< fixed;
    cout<< setprecision(4);
    cout<<A<<endl;

}
