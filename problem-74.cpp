/**#include <iostream>

using namespace std;

int main(){
    int x, a;

    cin >> x;
    for(int i = 0; i < x; i++){
            cin >> a;
            if(a == 0){
                 cout << "NULL\n";
            }
            else{
            if(a%2 == 0) cout << "EVEN";
            else cout << "ODD";

            if(a<0) cout << " NEGATIVE\n";
            else cout << " POSITIVE\n";
            }
    }

    return 0;
}*/
#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;
    int x[n];
    for(int i=1; i<=n; i++)
    {
        cin>>x[i];

    }
    for(int i=1; i<=n; i++)
    {
        if(x[i]>0)
        {
            if(x[i]%2==0)cout<<"EVEN POSITIVE\n";
            else cout<<"ODD POSITIVE\n";
        }
        else if(x[i]<0)
        {
            if(x[i]%2==0)cout<<"EVEN NEGATIVE\n";
            else cout<<"ODD NEGATIVE\n";
        }
        else cout<<"NULL\n";
    }

    return 0;
}
