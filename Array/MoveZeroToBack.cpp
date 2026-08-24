#include<iostream>
using namespace std;

void moveZero(int arr[],int n){
    int j = -1; 
   for(int i =0;i<n;i++){
       if(arr[i]==0){
        j = i;
        break;
       }
   }
   for(int i = j+1;i<n;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
    }
    
   }

    
}
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of an array"<<endl;
     for(int i =0; i<n;i++){
        cin>>arr[i];
     }
      moveZero(arr,n);
   
     for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
     }

     return 0; 

}