#include <iostream>
#include <stack>
using namespace std;

bool isBalance(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else if (s[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
        }
        else
        {
            return false;
        }
    }
    return st.empty();
    
}

int main()
{
    string s = "{([])}]";
    if (isBalance(s))
    {
        cout << "Balanced";
    }
    else
    {
        cout << "NOT";
    }
}