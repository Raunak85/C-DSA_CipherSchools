// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include <bits/stdc++.h> 
using namespace std;


char ToLowerCase(char c){
    return c - 'A' + 'a';
}

string ModifyString(string str){
    string modify="";
    for(int i=0;i<str.length();i++){
        if(str[i]>= 'A' && str[i]<='Z'){
            str[i] = ToLowerCase(str[i]);
        }
        if(str[i]>='a' && str[i]<='z' || str[i] >='0' && str[i] <= '9'){
            modify +=str[i];
        }
    }
    return modify;
}

bool checkPalindrome(string s)
{
    // Write your code here.
    s = ModifyString(s);
    
    bool flag = true;
    int start=0;
    int end=s.length()-1;
    while(start < end){
        if(s[start] != s[end]){
            flag = false;
            break;
        }
        start++;
        end--;
    }
    if(flag){
        return true;
    }else{
        return false;
    }
}
int main(){
    string s="c1 O$d@eeDe o1c";
    if(checkPalindrome(s)){
        cout<<"yes";
    }
    else{
        cout<<"NO";
    }
}