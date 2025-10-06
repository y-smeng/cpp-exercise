#include<iostream>
using namespace std;
void insert(int *arr, int pos, int val,int &n, int size = 10){
    if(pos > n || pos < 0){
        cout << "Error"<< endl;
        return;
    } 
    for(int i = n ; i > pos ; i--){
      arr[i] = arr[i-1];
    }
    arr[pos] = val;
    n++;
    cout << "Insert: "<<endl;
    for(int i = 0; i < n; i++) cout << "Value"<< i+1 << ": "<< arr[i] << endl;
}
void deleteAt(int *arr,int pos,int &n){
     if(pos > n || pos < 0){
        cout << "Cannot delete!"<< endl;
        return ;
     } 
     for(int i = pos; i < n - 1; i++){
        arr[i] = arr[i+1];
     }
     n--;
    cout << "After deleted"<< endl;
    for(int i = 0; i < n; i++) cout << "Value"<< i+1 << ": "<< arr[i] << endl;


}

int main(){
    int arr[10] = {5,4,3,2,1};
    int n = 5;
    
    insert(arr,2,10,n);

    insert(arr,5,10,n);

    deleteAt(arr,1,n);

    deleteAt(arr,7,n);

    return 0;

}