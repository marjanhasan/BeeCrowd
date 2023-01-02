#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,d,i=0,in=0,gr=0,dr=0;
    while(cin>>a>>b)
    {
        i++;
        if(a>b) in++;
        else if(a<b) gr++;
        else dr++;
        cout<<"Novo grenal (1-sim 2-nao)\n";
        cin>>d;
        if(d==1) continue;
        else break;
    }
    cout<<i<<" grenais\n";
    cout<<"Inter:"<<in<<"\n";
    cout<<"Gremio:"<<gr<<"\n";
    cout<<"Empates:"<<dr<<"\n";
    if(in>gr) cout<<"Inter venceu mais\n";
    else if(in<gr) cout<<"Gremio venceu mais\n";
    else cout<<"Não houve vencedor\n";
    return 0;
}
