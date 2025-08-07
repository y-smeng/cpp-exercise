#include <iostream>
using namespace std;
int main(){
    string name;
    int age;
    float GPA;

    cout << "Please enter your name: ";
    cin >> name;
    cout << "Please enter your age: ";
    cin >> age;
    cout << "Please enter your GPA: ";
    cin >> GPA;

    cout << "Your name is "<< name<< "\n";
    cout << "You are "<< age<< " years old\n";
    cout << "Your GPA is "<< GPA<< endl;
    return 0;
}