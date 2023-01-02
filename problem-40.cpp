#include <bits/stdc++.h>
using namespace std;

int main() {


    double N1, N2, N3, N4, N5, avr;
    cin>>N1>> N2>> N3>> N4;
    avr= ((N1*2) + (N2*3) + (N3*4) + (N4*1))/10;
    cout<< "Media: "<<fixed<<setprecision(1)<< avr <<endl;

    if( avr>= 7.0)
    {
    cout<< "Aluno aprovado."<<endl;
    }
    else if( avr >= 5.0)
    {
        cout<< "Aluno em exame."<<endl;
        cout<< "Nota do exame: ";
        cin>>N5;
        avr=(avr+N5)/2;
        if(avr>5.0)
        {
            cout<< "Aluno aprovado."<<endl;
        }
        else
        {
            cout<< "Aluno reprovado."<<endl;
        }
        cout<< "Media final: "<<fixed<<setprecision(1)<<avr<<endl;
    }
    else
    {
        cout<< "Aluno reprovado."<<endl;
    }
    return 0;
}
