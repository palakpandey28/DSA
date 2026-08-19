#include<iostream>
using namespace std;

bool check_sorted(int arr[],int n){
    for(int i =0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){

        }
        else if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
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
     bool result = check_sorted(arr,n);
     cout<<boolalpha<<"array sorted = "<<result;

}