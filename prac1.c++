#include <iostream>
using namespace std;
int main(){
    string firstname, lastname;
    cout<< "Please enter your first name: ";
    cin >> firstname;
    cout << "Please enter your last name: ";
    cin >> lastname;
    
    cout << "\nWelcome to CADT "<< firstname <<" "<<lastname << endl;
    return 0;
}