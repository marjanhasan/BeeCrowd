//1156
#include <bits/stdc++.h>
using namespace std;
int main() {
    float s=1, a=3, b=2, i=1;
    while(1)
    {
        if(a>39) break;
        s=s+(a/(pow(b,i)));
        i++;a+=2;
    }
    cout<<fixed<<setprecision(2)<<s<<"\n";
    return 0;
}
