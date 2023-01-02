#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    float a,b,c;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b>>c;
        cout<<fixed<<setprecision(1)<<((a*2 + b*3 + c*5)/(2.0+3.0+5.0))<<endl;
    }

    return 0;
}
