#include <iostream>
using namespace std;
int main() {
    int a[5],b=0,c=0,d=0,e=0;
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<5; i++)
    {
        if(a[i]%2==0)
            b+=1;
        if(a[i]%2!=0)
            c+=1;
        if(a[i]>0)
            d+=1;
        if(a[i]<0)
            e+=1;
    }
    cout<<b<<" valor(es) par(es)"<<endl;
    cout<<c<<" valor(es) impar(es)"<<endl;
    cout<<d<<" valor(es) positivo(s)"<<endl;
    cout<<e<<" valor(es) negativo(s)"<<endl;
    return 0;
}
