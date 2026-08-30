//Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from 
//the array within this range

// this is my approch and it is not opyimal solution 


#include<iostream>
using namespace std;

int missing(int nums[],int n){
   
    int target =0;
    while(target<=n){
         bool found =false; 
     for(int i = 0;i<n;i++){
        if(target==nums[i]){
            found = true;
            break;
        }
       }
       if(found==false){
        return target;
        break;
       }

       else{
        target++;
       }
     
    }
}
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
   int nums[n];
    cout<<"enter the elements of an array"<<endl;
     for(int i =0; i<n;i++){
        cin>>nums[i];
     }
      int ans =missing(nums,n);

     cout<<ans<<endl;

     return 0;
    
    }
