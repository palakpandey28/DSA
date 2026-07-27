#include<iostream>
using namespace std;

 void divisorprint(int n){
    for(int i =1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
 }
int main(){
    int n;
    
    cin>>n;
    divisorprint(n);
    return 0;
    
    
}