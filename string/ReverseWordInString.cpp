#include<iostream>
#include<stack>
#include<queue>
using namespace std;
        // method 1 to reverse the word
// string reverseWord(string s){
//     stack<char> st;
//     string temp = "";
//     for(int i=0;i<s.size();i++){
//         st.push(s[i]);
//     }
//     while (!st.empty())
//     {
//         temp += st.top();
//         st.pop();
//     }
    
//     return temp;

// }

            // second method to reverse the word

string reverseWord(string s){
    int i=0,j=s.size()-1;
    while (i<=j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
    return s;
}


int main(){
    string name = "hello my name is raunak mishra";
    string name2 = "";
    string temp = "";
    for(int i=0;i<name.size();i++){
        if(name[i] != ' '){
            temp += name[i];
        }   
        else{
            name2 += reverseWord(temp);
            name2 += ' ';
            temp = "";
        }
    }
    if(!temp.empty()){
        name2 += reverseWord(temp);
    }
    cout<<"After reversing the word from starting :" <<endl;
    cout<<name2;
    cout<<"\nAfter swap last word to first position like wise"<<endl;
    string name3 = "";
    temp = "";
    for(int i=name2.size()-1;i>=0;i--){
        if(name2[i] != ' ' ){
            temp += name2[i];
        }
        else{
            name3 += reverseWord(temp);
            name3 += ' ';
            temp = "";
        }
    }
    name3 += reverseWord(temp);
    cout<<name3;
    
}