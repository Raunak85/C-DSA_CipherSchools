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
        int k=0;
        int j=temp.size()-1;
       while (k<j)
       {
            swap(temp[k],temp[j]);
            k++;
            j--;
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