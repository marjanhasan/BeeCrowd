#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int fact=n;
    for(int i=1; i<=(n-1); i++)
    {
        fact=fact*(n-i);
    }
    cout<<fact<<"\n";
    return 0;
}
