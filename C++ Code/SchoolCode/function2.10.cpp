#include<iostream> 
using namespace std; 

int calFacto(int x){
    for(int i=1; i<=x; i++){
        x = x*(x-i);
    }
}

int main(){
    int x; 
    cout<<"x : ";
    cin>>x; 
    cout<<calFacto(x);
}


