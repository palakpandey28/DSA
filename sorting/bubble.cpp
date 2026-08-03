#include<iostream>
using namespace std;

void bubble_sort(int n,int arr[]){
    for(int i=n-1;i>=0;i--){
          for(int j = 0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
          }
    }
}

int main(){
     int n ;
     cout<<"enter the value of n "<<endl;
     cin>>n;

     int arr[n];

     cout<<"enter the value of n ";

     for(int i =0;i<n;i++){
        cin>>arr[i];
     }

   bubble_sort(n,arr);

   cout<<"sorted array"<<endl;

   for(int i =0;i<n;i++){
    cout<<arr[i]<<endl;;
   }

return 0;

}