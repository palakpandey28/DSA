#include<iostream>
using namespace std;

int main(){
    int product = 1;
    int sum = 0;
    int n =1231;
    while(n!=0){
        int rem ;
        rem = n%10;
        product = product*rem;
        sum = sum+rem;
        n = n/10;
    }

    int answer = product-sum;
    cout<<answer;
    return 0 ;
};

