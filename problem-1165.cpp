#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        int a=0;
        for(int i=2; i<x; i++)
        {
            if(x%i==0)
            {
                a++;
                break;
            }
        }
        if(a>0) cout<<x<<" nao eh primo\n";
        else cout<<x<<" eh primo\n";
    }
    return 0;
}
