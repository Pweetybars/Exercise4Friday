#include<iostream> 
using namespace std; 

float calSphereVol(float r){ 
    return (4 * 3.1415926521 * (r*r*r))/3; 
}
int main(){
    float r; 
    cout<<"Enter your radius : "; 
    cin>>r; 
    cout<<"Volume of the sphere : "<<calSphereVol(r); 
}