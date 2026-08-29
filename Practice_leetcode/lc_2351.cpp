#include<iostream>
using namespace std;

char repeatedCharacter(string s){
    int hash[26] = {0};
    for(int i =0;i<s.length();i++){
        hash[s[i]-'a']++;

        if(hash[s[i]-'a']==2){
            return s[i];
        }
    } 
    return -1;
}

int main(){
    string s;
    cout<<"enter the string"<<endl;
    cin>>s;
    char result = repeatedCharacter(s);
    cout<<"answer = "<<result;

    return 0;
}