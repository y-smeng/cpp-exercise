#include<iostream>
using namespace std;
int main(){
    string password;
    const string correctpassword = "admin123";
    cout << "Enter your password: ";
    cin >> password;

    if (password == correctpassword)
    {
        cout << "Access Granted";
    }else

    cout << "Access denied";

    return 0;
    
    
}
