#include<iostream>
using namespace std;
int f;
int c = 2;
int factorial(int n){
    if((n==0)||(n==1)){
        cout<<1;
    }
    else{
        if(c>n){
            cout<< f;
        }
        else{
        f = c*(c-1);
        c++;
        factorial(n);
        }
    }
}

int main(){
 factorial(3);
}