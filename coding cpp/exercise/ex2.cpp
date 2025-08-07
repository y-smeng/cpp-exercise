#include <iostream>
using namespace std;
int main(){

    int choice;
    float a,b, result;

    cout << "1. Add\n2.Subtract\n3. Multiply\n4. Devide\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    switch (choice)
    {
    case 1:
        result = a + b;
        break;
    case 2:
        result = a - b;
        break;
    case 3:
        result = a * b;
        break;
    case 4:
        if (b != 0)
        {
            result = a / b;
        }
        else{
            cout<<"Error: Devision by zero\n ";
        }
        
        break;    
    default:
    cout << "Invalid choice\n";
        break;
    }
    cout<< "Result: "<<result<< endl;
    
}