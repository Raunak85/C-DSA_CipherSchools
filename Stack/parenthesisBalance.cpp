#include<iostream>
#include<stack>
using namespace std;

bool isBalance(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        } 
        // else if(s[i] == st.top()){
        //     st.pop();
        // }
        // else{
        //     break;
        // }
        else if(s[i] == ')'){
            if(!s.empty() && st.top() == '('){
                st.pop();
            }
            else{
                break;
            }
        }
        else if(s[i] == '}'){
            if(!s.empty() && st.top() == '{'){
                st.pop();
            }
                        else{
                break;
            }
        }
        else if(s[i] == ']'){
            if(!s.empty() && st.top() == '['){
                st.pop();
            }
            
        }else{
            break;
        }
    }
    if(!st.empty()){
        // cout<<"656";
        return false;
    }
       cout<<"ll";
        return true;
    
}

int main(){
    string s = "{([])}])";
    if(isBalance(s)){
        cout<<"Balanced";
    }else{
        cout<<"NOT";
    }
}