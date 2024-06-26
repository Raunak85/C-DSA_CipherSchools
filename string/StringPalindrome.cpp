#include<iostream>
using namespace std;
bool CheckPalindrome(string str){
    bool flag=true;
    int i=0,j=str.length()-1;
    while (i<j)
    {
        if(str[i] >= 65 && str[i]<=90){  // if any charactor is in capital, it will change in smallCase;
            int a=str[i];
            char c=char(a)+32;
            str[i] = c;
        }
        if(str[j] >=65 && str[j]<=90){
            int a=str[i];
            char c=char(a)+32;
            str[j] = c;
        }
       
        if(str[i] != str[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    return flag;
    
}

// second method to convert small to upper and upper to lower

char ToLowerCase(char c){
    if(c>='a' && c<= 'z') return c;
    else{
        char t = c - 'A' + 'a';
        return t;
    }
}

char ToUpperCase(char c){
    if(c >= 'A' && c<= 'Z') return c;
    else{
        char t = c - 'a' + 'A';
        return t;
    }
}

int main(){
    string str="Namana";
    // if(CheckPalindrome(str)){
    //     cout<<"palindrome string";
    // }else{
    //     cout<<"Not palindrome string";
    // }
    
    // char c=ToLowerCase('e');
    // cout<<c;

    char u = ToUpperCase('d');
    cout<<u;
}