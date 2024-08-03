#include<iostream>
#include<stack>
using namespace std;

string reverseStr(string s){
    stack<char> st;
    for(char c:s){
        st.push(c);
    }
    s = "";
    while(!st.empty()){
        s += st.top();
        st.pop();
    }
    return s;
}
int main(){
    string str = "Raunak";
    str = reverseStr(str);
    cout<<str;
}