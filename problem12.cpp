#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double pi=3.14159, A, B, C, tri, cir, trap, sq, rect;
    cin>>A>>B>>C;
    tri = 0.5*A*C;
    cir = pi* C * C;
    trap = 0.5 * (A+B) * C;
    sq = B * B;
    rect = A * B;

    cout<< "TRIANGULO: " << fixed << setprecision(3) << tri <<endl;
    cout<< "CIRCULO: " << fixed << setprecision(3) << cir <<endl;
    cout<< "TRAPEZIO: " << fixed << setprecision(3) << trap <<endl;
    cout<< "QUADRADO: " << fixed << setprecision(3) << sq <<endl;
    cout<< "RETANGULO: " << fixed << setprecision(3) << rect <<endl;
    return 0;
}
