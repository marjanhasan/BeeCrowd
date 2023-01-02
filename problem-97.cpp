#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j=7;

    for(int i=1; i<=9; i+=2)
    {
        for(int k=1; k<=3; k++)
        {
            cout<< "I="<<i<<" J="<<j<<endl;
            j--;
        }
        j+=5;
    }
    return 0;
}
