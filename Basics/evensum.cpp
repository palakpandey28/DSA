#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter value of n"<<endl;
    cin>>n;
    int sum = 0;
    for(int i =0;i<=n;i++){
       
        if(i%2==0){
            sum = sum+i;

        }
        else{
            // cout<<"this number is not even number so not included in sum"<<i<<endl;
            // thats all
        
        }
    }
    cout<<"the sum of all even number between 0 to "<<n<<" = ";
    cout<<sum<<endl;
    return 0;

}