#include <iostream>
using namespace std;
int main (){
    string username, password;
    int attemp = 3;
    const string correctpassword = "1234", correctusername = "admin";
    for (int i = attemp; i > 0 ; i--)
    {
        cout << "Enter the username: ";
        cin >> username;
        cout << "Enter the password: ";
        cin >> password;
        if(username == correctusername && password == correctpassword)
        cout << "Access Granted\n";
        else 
        cout << "Access Denied\n";
    }
    
}