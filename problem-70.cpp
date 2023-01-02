#include <iostream>
using namespace std;
int main() {
    int x, a=0;
    cin>>x;
    int y=x+15;
    for(int i=x; i<y; i++ )
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
            a+=1;
        }
        if(a==6)
        {
            break;
        }
    }
    /*
    int n, i=0;
    cin>>n;
    while(i < 6){
        if(n%2!=0){
            cout<<n<<endl;
            i++;
        }
        n++;
     algo:
     1.start
     2. input n
     3. make i=0;
     4. start while loop (i<6)
     5. start if for getting odd number and i++
     6. n++ for every loop
     7. end
     }
     */
    return 0;
}
