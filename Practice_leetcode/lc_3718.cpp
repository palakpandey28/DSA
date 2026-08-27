#include<iostream>
#include<set>

using namespace std;

int missing(int nums[],int n,int k){
    
  set<int>sett;
for(int i =0;i<n;i++){
    sett.insert(nums[i]);
}
int ans =k;
while(sett.count(ans)){
    ans = ans+k;
}

return ans;
}

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int arr[n];
    int k;
    cout<<"enter the value of k"<<endl;
    cin>>k;
    cout<<"enter the elements of an array"<<endl;
     for(int i =0; i<n;i++){
        cin>>arr[i];
     }
    int result= missing(arr,n,k);
    cout<<"answer ="<<result;
     

     return 0; 

}