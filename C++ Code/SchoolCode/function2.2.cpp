#include<iostream> 
using namespace std; 

int calAreaRectangle(int x, int y){
    return x*y; 
}

int main(){
    cout<<"Area : "; 
    cout<<calAreaRectangle(4,5); 
    return 0; 
}