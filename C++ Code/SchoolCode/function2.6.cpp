#include<iostream> 
#include<cmath> 
using namespace std; 

int calCubeVol(int x){ 
    return x*x*x; 
}
int main(){
    int x; 
    cout<<"Enter x : "; 
    cin>>x; 
    cout<<"Your cube volume : "<<calCubeVol(x); 
    return 0; 
}

