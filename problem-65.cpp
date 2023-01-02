#include <iostream>

using namespace std;

int main() {

    int a[5],b=0;
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<5; i++)
    {
        if(a[i]%2==0)
        {
            b+=1;
        }
    }
    cout<<b<<" valores pares"<<endl;


    return 0;
}
