#include<iostream>
using namespace std;
bool CheckPalindrome(string str){
    bool flag=true;
    int i=0,j=str.length()-1;
    while (i<j)
    {
        if(str[i] != str[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    return flag;
    
}
int main(){
    string str="namana";
    if(CheckPalindrome(str)){
        cout<<"palindrome string";
    }else{
        cout<<"Not palindrome string";
    }
}