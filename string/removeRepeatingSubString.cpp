#include<iostream>
using namespace std;

string RemoveRepeatingSubString(string str,string part){
    while(str.length()>=part.length()){
        for(int i=0;i<str.length();i++){
            int j=i+1,k=i+2;
            if(part[i] == str[i]){
                if(part[j] == str[j]){
                    if(part[k] == str[k]){
                        continue;
                    }
                }
            }
        }
    }
}

int main(){
    string str="aabcbcdc";
    string part="abc";
    str = RemoveRepeatingSubString(str,part)
}