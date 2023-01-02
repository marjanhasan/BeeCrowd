#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=3; j++)
        {
            cout<<++a<<" ";
        }
        cout<<"PUM\n";
        ++a;
    }
    return 0;
}
