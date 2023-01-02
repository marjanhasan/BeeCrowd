#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,num;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>num;
        int sum=0;
        for(int i=1; i<num; i++)
        {
            if(num%i==0)
            {
                sum+=i;
            }
        }
        if(num==sum) cout<<num<<" eh perfeito\n";
        else cout<<num<<" nao eh perfeito\n";
    }
    return 0;
}
