#include <bits/stdc++.h>
using namespace std;

int balanced(string str)
{
    stack<char>st;
    char c;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        st.push(str[i]);
        
        else if(st.empty())
        return 0;
        
        else{
        c=st.top();
        st.pop();
        
        if(str[i]==')')
        {
            if(c=='(')
            continue;
            else return 0;
        }
        
        if(str[i]==']')
        {
            if(c=='[')
            continue;
            else return 0;
        }
        
        if(str[i]=='}')
        {
            if(c=='{')
            continue;
            else return 0;
        }
        }
    }
    if(st.empty())
    return 1;
    else
    return 0;
}

int main()
{
    string str="{[()]{}}";
    
    string str2="({()})";
    
    if(balanced(str))
    cout<<"str is balanced";
    else
    cout<<"str is not balanced";
    
    if(balanced(str2))
    cout<<"\nstr2 is balanced";
    else
    cout<<"\nstr2 is not balanced";
    
    return 0;
}