#include<iostream>
using namespace std;

void printNumbers(int n){
     if(n<=0){
        return;

     }
     else{
         cout<<n<<endl;
           n--;
          printNumbers(n);
     }
}

int main(){
    printNumbers(5);
}