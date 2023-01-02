#include <iostream>

using namespace std;

int main() {

    int n,x,in=0, out=0;
    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(x>0)
        {
            if(x>=10 && x<=20)
            {
                in+=1;
            }
            else{
                out+=1;
            }
        }
    }
    cout<<in<<" in\n"<<out<<" out\n";

    return 0;
}
