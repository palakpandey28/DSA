
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int number;
    number = n;
    int digit =0;
    int num;

    while(n!=0){
        num = n%10;
        digit = digit+(num*num*num);
        n =n/10;
    }

    

    if(number==digit){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}