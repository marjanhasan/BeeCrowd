#include <iostream>
using namespace std;
int main() {
    int t, x, y, sum,a;
    sum=a=0;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>x>>y;
        while(1)
        {
            if(x%2!=0)
            {
                sum+=x;
                a++;
            }
            x++;
            if(y==a) break;
        }
        cout<<sum<<"\n";
        sum=0;
        a=0;
    }

    return 0;
}
