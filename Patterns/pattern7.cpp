/*going to print pattern like

1
01
101
0101

*/


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
         for(int j =0;j<i+1;j++){
            if((i+j)%2==0){
                cout<<"1";
            
            }
            else{
                cout<<"0";
            }
         }
         cout<<endl;
    }
}