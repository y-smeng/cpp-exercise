#include<iostream>
using namespace std;
int main(){
    float a, b, sum, difference, product, quotient;
    cout << "Enter two number: ";
    cin >> a >> b;

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;

    cout << "Your sum is: "<< sum<< "\n";
    cout << "\nYour difference is: "<< difference<< endl;
    cout << "\nYour product is: "<< product<< endl;
    cout << "\nYour quotient is: "<< quotient<< endl;
}