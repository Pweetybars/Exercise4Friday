#include<iostream>
using namespace std; 

void Multiply(){
    int x; 
    cout<<"Enter your number : "; 
    cin >> x; 

    for(int i=1; i<11; i++){
        cout<<i<<" * "<<x<<" = "<<x*i<<endl;
    }
}

int main(){

    Multiply();

    return 0; 
}
