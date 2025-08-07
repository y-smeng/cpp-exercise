#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter three number: ";
    cin>>a >>b >>c;

    if(a >= b && a >= c)
    cout << "Maximun is "<< a;
    else if (b >= a && b >= c)
    {
        cout << "Maximum is "<< b;
    }
    else (c >= a && c >= b);
    cout << "Maximum is "<< c;
}