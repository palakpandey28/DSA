/*going to print pattern like 
    A
   ABA
  ABCBA
 ABCDCBA
 
*/


#include<iostream>
using namespace std;

int main(){
     int n ;
   cout<<"enter value of n "<<endl;
   cin>>n;
  
  for(int i=0;i<n;i++){
    char ch='A';
    for(int j=0;j<n-i;j++){
      cout<<" ";
    }
    for(int j=0;j<i+1;j++){
        cout<<ch;
        ch++;
    }
       for(char ch = 'A'+i-1;ch>='A';ch--){
        cout<<ch;
        
    }
   
    cout<<endl;
  }
}