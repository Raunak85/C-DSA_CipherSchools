#include<iostream>
using namespace std;
int main(){
    string str= "raunak ";
    // cout<<str.length();
    string r = " kumar";
    str.append(r);
    str.insert(7,"test");
    cout<<str;
}