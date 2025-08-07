#include<iostream>
using namespace std;
int main(){
    float num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0){
        cout << "Your number is positive!";

    } else if (num < 0){
        cout << "Your number is negative!";


    } else {
        cout << "Your number is ZERO!";
    }
        

    return 0;
    
}