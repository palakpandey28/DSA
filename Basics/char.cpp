#include<iostream>
using namespace std;

int main(){
    char ch ;
    cout<<"enter a character ";
    cin>>ch;
    
    if(ch>='a'&&ch<='z'){
        cout<<"this is a lower case"<<endl;
    }
    else if(ch>='A'&& ch<='Z'){
          cout<<"this is a upper case"<<endl;
    }
    else if(ch>=1 && ch<=9){
          cout<<"this is a numeric case"<<endl;
    }
    else{
          cout<<"this is a symbol"<<endl;
    }
    return 0;
}