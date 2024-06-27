// You are given a string o words, you need to replace all the spaces with "@9";
#include<iostream>
using namespace std;

string replace(string str){
    string temp = "";
    for(int i=0;i<str.length();i++){
      
        if(str[i] == ' '){
            temp += "@9";
        }else{
            temp += str[i];
        }
        
    }
    return temp;
}
int main(){
    string name = "raunak Kumar";
    name = replace(name);
    cout<<name;
}













// return max Occuring Character in string
// input - raunak ---------- will return "a" a max time repeat
