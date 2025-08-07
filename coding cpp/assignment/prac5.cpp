#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Please enter your number: ";
    cin >> num;
    
    if (num % 3 == 0 && num % 5 == 0)
    {
        cout << "This number is a multiple of 3 and 5";
    }else
    cout << "This number is NOT a multiple of 3 and 5";

    return 0;
    
}