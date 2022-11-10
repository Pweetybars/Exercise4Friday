#include<iostream> 
using namespace std; 

string EvenORNot(int x){
    string i; 
    if(x%5==0){
        i = "Even";
    } else {
        i = "not even"; 
    }
    return i; 
}

int main(){
    int x; 
    cout<<"Enter your number : "; 
    cin >> x; 
    cout<<"it is "<<EvenORNot(x); 
}