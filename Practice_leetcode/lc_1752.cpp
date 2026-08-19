#include<iostream>
using namespace std;
int count = 0;
bool check(int arr[],int n){
 for(int i = 0; i < n-1 ; i++){
    if(arr[i]>arr[i+1]){
        count++;
    }
 }

if(arr[0]<arr[n-1]){
    count++;
}
if(count==1 ||count == 0){
    return true;
}
else{
    return false;
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
     bool result = check(arr,n);
     
     cout<<boolalpha<<"array sorted and rotated = "<<result;

}