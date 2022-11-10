#include<iostream> 
using namespace std; 

string check_prime(int n){
    string ivy = "Prime"; 
    for(int i=2; i<=n/2; i++){
     if(n % i == 0){
        ivy = "Not Prime"; 
        break;
     }
    }
    return ivy; 
}

int main(){
    int n; 
    cout<<"Enter N : "; 
    cin >> n; 
    cout<<"it is "<<check_prime(n); 
}