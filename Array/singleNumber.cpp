#include<iostream>
using namespace std;

int single(int nums[],int n){
    int ans = 0;
    for(int i =0;i<n;i++){
        ans = ans^nums[i];
    }
    return ans;
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
     int result = single(arr,n);
     cout<<"answer "<<result;

}