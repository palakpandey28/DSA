#include<iostream>
using namespace std;


int count = 1;

int printNumber(int n ){
    
  if(count >n){
    return 0 ;

  }

  else{
    cout<<count<<endl;
    count++;
    printNumber(n);

  }

}


int main(){
    printNumber(5);
    
}