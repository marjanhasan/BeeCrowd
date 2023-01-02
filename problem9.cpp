#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int employees_number, worked_hours;
    float salary_per_hour, salary;
    cin>>employees_number>>worked_hours>>salary_per_hour;
    salary= worked_hours * salary_per_hour;
    cout<<"NUMBER = "<<employees_number <<endl<<"SALARY = U$ "<<fixed<<setprecision(2)<<salary<<endl;
    return 0;
}
