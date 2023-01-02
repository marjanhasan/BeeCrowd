#include <iostream>

using namespace std;

int main() {

    float a[6];
    int b=0;
    for(int i=0; i<6; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<6; i++)
    {
        if(a[i]>0)
        {
            b+=1;
        }
    }
    cout<<b<<" valores positivos"<<endl;

    return 0;
}
