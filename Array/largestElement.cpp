#include<iostream>
using namespace std;

int largest_element_of_array(int arr[], int n){
      int largest = arr[0];
      for(int i =0; i<n;i++){
         if(arr[i]>largest){
            largest = arr[i];
         }
      
    }
      return largest;
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
     int result = largest_element_of_array(arr,n);
     cout<<"the largest element of given array is "<<result;

}