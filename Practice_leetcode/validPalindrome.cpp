#include <iostream>
using namespace std;

     int i = 0;
     string result;
    bool isPalindrome(string s) {
         for (int i =0; i<s.length();i++){
                s[i]=tolower(s[i]);
         }
         for(int i = 0 ; i<s.length();i++){
           if(isalpha(s[i])){
            result = result + s[i];
        }
    }
				if(i >= result.size()/2 ){
                    
                 return true;
            }
            if(result[i]==result[result.size()-i-1]){
                i++;
                return isPalindrome(result);
            }
            else{
                return false;
            }	
        }

        int main(){
            string s;
            cin>>s;
            isPalindrome(s);
            
        }
		
    
