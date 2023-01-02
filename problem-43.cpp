#include <bits/stdc++.h>
using namespace std;
int main() {
    float a,b,c,p,ar;
    cin>>a>>b>>c;

    if((a+b)>c && (b+c)>a && (a+c)>b)
    {
        p=a+b+c;
        cout<< "Perimetro = "<<fixed<<setprecision(1)<<p<<endl;
    }
    else
    {
        ar=.5*(a+b)*c;
        cout<< "Area = "<<fixed<<setprecision(1)<<ar<<endl;
    }
    return 0;
}
