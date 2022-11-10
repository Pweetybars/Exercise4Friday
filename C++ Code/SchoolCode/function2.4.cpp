#include<iostream> 
using namespace std; 

float calAreaTriangle(int x, int y){
    return (x*y)/2; 
}

int main(){
    int x, y; 
    cout<<"Enter your height : "; 
    cin >> x; 
    cout<<"Enter yout bottom : "; 
    cin >> y; 
    cout<<"Your triangle area : "; 
    cout<<calAreaTriangle(x ,y); 
}