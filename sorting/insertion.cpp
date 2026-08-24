#include<iostream>
using namespace std;

void insertion_sort(int n, int arr[]){
    for(int i =0;i<n;i++){
        int j = i;
        while(j<0&&arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            j--;
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

insertion_sort(n,arr);

   cout<<"sorted array"<<endl;

   for(int i =0;i<n;i++){
    cout<<arr[i]<<endl;;
   }

return 0;

}