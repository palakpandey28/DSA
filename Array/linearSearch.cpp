#include<iostream>
using namespace std;

int linear(int arr[],int n,int target){
    int result = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            result = i;
            break;
        }
    }
    return result;
}
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int target;
    cout<<"enter the value of target value";
    cin>>target;
    int arr[n];
    cout<<"enter the elements of an array"<<endl;
     for(int i =0; i<n;i++){
        cin>>arr[i];
     }
      int ans =linear(arr,n,target);

     cout<<ans<<endl;
     
   

     return 0; 

}