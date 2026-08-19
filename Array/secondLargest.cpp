#include<iostream>
using namespace std;

int second_largest(int arr[], int n){
    int largest = arr[0];
    int slargest = -1;

    for(int i =1;i<n;i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
            
        }

        else if(arr[i]< largest && arr[i]> slargest){
            slargest=arr[i];
        }
    }

    if(largest!=slargest){
        return slargest;
    }
    else{
        return -1;
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
     int result = second_largest(arr,n);
     cout<<"the second  largest element of given array is "<<result;

}