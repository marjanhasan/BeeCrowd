#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a=0;

    for(float i=0; i<2.01; i+=0.2)
    {
        for(float j=1; j<=3; j++)
        {
            cout<<"I="<<i<<" J="<<j+a<<endl;
        }
        a+=0.2;
    }
    return 0;
}
