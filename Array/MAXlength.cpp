#include<iostream>
using namespace std;

int consecutiveChar(string s){
     int n = s.length();
     int hash[26]={0};
     int max =0;

    for(int i =0;i<n;i++){
        hash[s[i]-'a']++;
    } 
    

    for(int i = 0;i<26;i++){
        if(hash[i]>max){
            max = hash[i];
        }
    }

    return max;

}

int main(){
    string s;
    cout<<"enter the string"<<endl;
    cin>>s;

    int result =consecutiveChar(s);
    cout<<"ans = "<<result;

    return 0;
}