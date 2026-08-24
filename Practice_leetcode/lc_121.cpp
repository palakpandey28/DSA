#include<iostream>
using namespace std;

int max_profit(int arr[],int n){
    int buy = 0;
    int profit = 0;
    int max_sub =0;
    for(int i = 0;i<n;i++){
        if(arr[i]<arr[buy]){
            buy =i;
        }
        
       max_sub = arr[i]-arr[buy];
       profit = max(max_sub,profit);
           
        
       
    }
   
    return profit;
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
      int result =max_profit(arr,n);
   
     cout<<result;

     return 0; 

}