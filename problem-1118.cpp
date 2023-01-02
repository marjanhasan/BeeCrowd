#include <bits/stdc++.h>
using namespace std;
int main() {
     float n,d,sum=0, x=0;
     while(cin>>n)
     {
         if( n>0 && n<=10)
         {
             x++;
             sum+=n;
         }
         else
         {
             cout<<"nota invalida\n";
             continue;
         }
         if(x==2)
         {
             cout<<"media= "<<fixed<<setprecision(2)<<sum/2<< "\n";
             sum=0;
             x=0;
             cout<< "novo calculo (1-sim 2-nao)\n";
             while(cin>>d)
             {
                 if(d==1 || d==2) break;
                 else
                 {
                     cout<< "novo calculo (1-sim 2-nao)\n";
                     continue;
                 }
             }
             if(d==1) continue;
             if(d==2) break;
         }
     }
    return 0;
}
