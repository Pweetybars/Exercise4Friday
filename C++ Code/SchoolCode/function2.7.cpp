#include<iostream> 
using namespace std; 

string OddEven(int x){
    string i; 
    if(x%2==0){
        i = "Even."; 
    } else { 
        i = "Odd."; 
    }
    return i; 
}

int main(){
    int x; 
    cout<<"Enter your number : "; 
    cin >> x; 
    cout<<"Your number is : "<<OddEven(x);
    
    return 0; 
}