#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n, a=0, b=0;

    while(cin>>n)
    {
        if(n<0 || n>10){
            cout<< "nota invalida\n";
        }
        else {
            a+=n;
            b+=1;
        }
        if(b==2){
             break;
        }
    }
    cout<<"media = "<<fixed<<setprecision(2)<<a/2<<"\n";
    return 0;
}
