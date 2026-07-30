//selection sort

#include<iostream>
using namespace std;

void selection_sort(int n, int arr[]){
    for(int i =0;i<=n-2;i++){
        int mini=i;
        for(int j =i;j <=n-1;j++){
            if(arr[mini]>arr[j]){
                mini = j;
            }
            
        }
        swap(arr[mini],arr[i]);
    }
}

int main(){
    cout<<"enter the number of element in array"<<endl;
    
    int n;

    cin>>n;
    cout<<"enter elements"<<endl;
    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    selection_sort(n,arr);

    cout<<"new sorted array is "<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}