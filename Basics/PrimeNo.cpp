#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"enter value of n"<<endl;
     cin>>n;
     

     if((n==1)||(n==0)){
        cout<<"false";
     }
     else{
        for(int i =2;i<n;i++){
            if(n%i==0){
                cout<< "true";
                return 0;
            }
            else{
                cout<<"false";
                return 0;
            }
        }
     }
}