#include<iostream>
using namespace std;
// my approach

// int leftRotate(int arr[] , int n, int k){
//     for(int i = 1; i<=k;i++){
//         int temp = arr[0];
//         for(int j = 1; j<=n;j++){
//             arr[j-1]=arr[j];

//         }
//         arr[n-1]=temp;
//     }
// }


//optimal approach

int reverse(int arr[],int start,int end){
     while(start<=end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;

     }
}

int leftRotate(int arr[] , int n, int k){

    // now what if k is greater than n then for thet what we have to do k = k%n
    k = k%n;
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);

    return arr[n];


}

int main(){
      
    int n;
    cout<<"enter the value of n";
    cin>>n;

    int k;
    cout<<"enter the value of k";
    cin>>k;

    int arr[n];
    cout<<"enter the elements of an array"<<endl;
     for(int i =0; i<n;i++){
        cin>>arr[i];
     }
     leftRotate(arr,n,k);
     cout<<"after rotation "<<endl;
     for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
     }

     return 0; 

}
