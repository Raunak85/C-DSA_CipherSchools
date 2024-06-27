#include<iostream>
using namespace std;
string hello(string str){
    
}

string  reverse(string str){
    int i=0;
    int j=str.length() -1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    return str;
}
int main(){
    string str="hello";
    str = reverse(str);
    cout<<str;
    
}