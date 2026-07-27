#include<iostream>
using namespace std;

int main(){
    int n1;
    int n2;
    cout<<"enter value of n1"<<endl;
    cin>>n1;
    cout<<"enter value of n2"<<endl;
    cin>>n2;
    int gcd;

    if(n1>n2){
        for(int i = 1;i<=n2;i++){
            if((n1%i==0)&&(n2%i==0)){
                 gcd= i;
            }
            
        }
    }
        
    else{
        for(int i = 1;i<=n1;i++){
            if((n1%i==0)&&(n2%i==0)){
                 gcd= i;
            }

    }
    }
    cout<<gcd;
    
}