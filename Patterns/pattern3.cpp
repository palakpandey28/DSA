/*going to print patterns like
A
BA
CBA
DCBA
*/

#include<iostream>
using namespace std;

int main(){
     int n ;
   cout<<"enter value of n "<<endl;
   cin>>n;
   for(int i =0;i<n;i++){
    
    for(char ch = 'A'+i-1;ch>='A';ch--){
        cout<<ch;
        
    }
    cout<<endl;
   }
}