#include <iostream>
using namespace std;
int main() {
    /**
     * input n
     * for loop 1-10000
     * i%n=2
     * print x
     *
     */
     int n;
     cin>>n;
     for(int i=1; i<=10000; i++)
     {
         if(i%n==2) cout<<i<<endl;
     }

    return 0;
}
