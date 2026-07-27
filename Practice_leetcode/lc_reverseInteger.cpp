#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter the value of n"<<endl;
    cin>>n;

   int  num = 0;
   while(n!=0){
    int rem = n%10;
    if(num>(INT32_MAX/10)||num<(INT32_MIN/10)){
        return 0;
    }
    else{
    num = (num*10)+rem;
    n = n/10;
    }
   }
   cout<<num;

  
   return 0;
 
};