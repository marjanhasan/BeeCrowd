#include<bits/stdc++.h>
using namespace std;
int main(){
    int X;
    double Y,p;
    cin>>X>>Y;

    switch(X){
    case 1:
        p=4.00*Y;
        break;
    case 2:
        p=4.50*Y;
        break;
    case 3:
        p=5.00*Y;
        break;
    case 4:
        p=2.00*Y;
        break;
    case 5:
        p=1.50*Y;
        break;
    }
    cout<< "Total: R$ "<<fixed<<setprecision(2)<<p<<endl;
}
