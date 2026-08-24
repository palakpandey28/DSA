#include<iostream>
using namespace std;

int leftRotateBy1(int arr[],int n){
   int temp = arr[0];
   for(int i = 1;i<n;i++){
    arr[i-1]= arr[i];
   }
   arr[n-1]=temp;

   return arr[n];
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
     leftRotateBy1(arr,n);
     cout<<"after rotation "<<endl;
     for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
     }

     return 0; 

}

