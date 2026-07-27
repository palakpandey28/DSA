#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter thr value of n"<<endl;
    cin>>n;
    int num ;
    num = n;
    int digit =0;
        int rem;
    while(n!=0){
        rem = n%10;
         if(digit>(INT32_MAX/10)||digit<(INT32_MIN/10)){
        return 0;
         }
        digit = digit*10+rem;
        n = n/10;
    }
  
    
    
    if((num==digit)&&(num>=0)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}