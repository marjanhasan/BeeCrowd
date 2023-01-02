#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,total=0,a=0;
    while(cin>>n)
    {
        if(n<0) break;
        total=total+n;
        a++;
    }
    cout<<fixed<<setprecision(2)<<(float)total/a<<"\n";
    return 0;
}
