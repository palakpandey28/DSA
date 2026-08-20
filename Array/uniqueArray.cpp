#include<iostream>
using namespace std;

// this was my approach 
       
// int uniqueA(int arr[],int n){

//     int unique = arr[0];
//     int count = 1;
//     for(int i = 0; i < n ; i++ ){
//           if(unique == arr[i]){

//           }   
//           else{
//             unique = arr[i];
//             count++;
            
        
//           }
//     }

//     return count;
// }


int removeDuplicate(int arr[],int n){
   int i =0;
   for(int j =1;j<n;j++){
    if(arr[i]!=arr[j]){
        arr[i+1]=arr[j];
        i++; 
    }
   }
   return i+1; 

    
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
     int result = removeDuplicate (arr,n);
     cout<<"the count of unique elemnt is an array = "<<result;

}

