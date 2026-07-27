/*going to print pattern like 
1        1
12      21
123    321
1234  4321
1234554321
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;

    for(int i =0;i<n;i++){
     int num =1;
     for(int j=0;j<i+1;j++){
        cout<<num;
        num++;
     }   
     for(int j=0;j<2*(n-1-i);j++){
        cout<<" ";
     }
     
     for(int numb=i+1;numb>0;numb--){
        cout<<numb;
        
     }
     cout<<endl;

    }

}
