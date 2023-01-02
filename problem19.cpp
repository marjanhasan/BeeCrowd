#include<iostream>
using namespace std;
int main (){
    int sec;
    cin>>sec;
    cout<<sec/3600<< ":" <<(sec%3600)/60<< ":"<<sec%60<<endl;
    return 0;
}

