#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string s){
    stack<string> str;
    for(int i=0;i<s.size();i++){
        string temp = "";
       while (s[i] != ' ' && i < s.length())
       {
            temp += s[i];
            i++;
       }
       str.push(temp);
    }
    while (!str.empty())
    {
        cout<<str.top()<<" ";
        str.pop();
    }
    
}

int main(){
    string n = "Hello World from Marks";
    reverseSentence(n);
}