#include <iostream>
using namespace std;
int main(){
    int a,b,c=0;
    cin>>a>>b;
        if(a>b)
        {
            int i=a-1;
            for(i; i>b; i--)
            {
                if(i%2!=0)
                {
                    c+=i;
                }
            }
        }
        else
        {
            int i=a+1;
            for(i; i<b; i++)
            {
                if(i%2!=0)
                {
                    c+=i;
                }
            }
        }
    cout<<c<<endl;
    return 0;
}
