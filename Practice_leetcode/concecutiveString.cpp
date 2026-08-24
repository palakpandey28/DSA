#include<iostream>
using namespace std;

int consecutiveString(string s){
    int power =1;
    int count =1;

    for(int i =1;i<=s.length();i++){
        if(s[i-1]==s[i]){
            count++;
        }
       else{
         power = max(power,count);
         count =1;
       }
    } 
     return power;
       
    
}

int main(){
    string s;
    cout<<"enter the string"<<endl;
    cin>>s;

    int result =consecutiveString(s);
    cout<<"ans = "<<result;

    return 0;
}