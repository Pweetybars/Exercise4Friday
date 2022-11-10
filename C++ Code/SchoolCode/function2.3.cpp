#include<iostream> 
using namespace std; 

float calCircleArea(int r){
    return 3.14 *(r * r);
}
int main(){
    int r;
    cout<<"Enter your radius : "; 
    cin >> r; 
    cout<<"Your Circle Area : "; 
    cout<<calCircleArea(r); 
}