#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    int code_of_product_one, code_of_product_two, units_of_product_one, units_of_product_two;
    float price_per_units_product_one, price_per_units_product_two, final_price;

    cin>>code_of_product_one>>units_of_product_one>>price_per_units_product_one;
    cin>>code_of_product_two>>units_of_product_two>>price_per_units_product_two;

    final_price=(units_of_product_one * price_per_units_product_one)
    + (units_of_product_two * price_per_units_product_two);

    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<final_price<<endl;
    return 0;
}





/*#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int product_code, number_of_units;
    float price_of_single_unit, price_of_product_one, price_of_product_two, final_pricing;

    //getting input for product one
    cout<<"Enter product code: ";
    cin>>product_code;

    cout<<"Enter number of units: ";
    cin>>number_of_units;

    cout<<"Enter price of single unit: ";
    cin>>price_of_single_unit;

    price_of_product_one=number_of_units * price_of_single_unit;


    //getting input for product two
    cout<<"Enter product code: ";
    cin>>product_code;

    cout<<"Enter number of units: ";
    cin>>number_of_units;

    cout<<"Enter price of single unit: ";
    cin>>price_of_single_unit;

    price_of_product_two=number_of_units * price_of_single_unit;

    //total pricing section

    final_pricing=price_of_product_one+price_of_product_two;

    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<final_pricing<<endl;

    return 0;
}*/

