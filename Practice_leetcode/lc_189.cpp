#include<iostream>
#include<vector>
using namespace std;

vector<int>temp;
int rotate(int arr[],int n , int k){
      temp.resize(n);
    for(int i =0;i<n;i++){
       temp[(i+k)%n]=arr[i];
   }

   return temp[n];
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
     int k;
    cout<<"enter the value of k";
    cin>>k;
    rotate(arr,n,k);
     cout<<boolalpha<<"array raoated by "<<k<<" is equal to "<<endl;
     for(int i =0; i<n;i++){
        cout<<temp[i]<<" ";
     }

}
