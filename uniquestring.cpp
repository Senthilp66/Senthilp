#include <bits/stdc++.h>
using namespace std;
 
bool uniqueCharacters(string str)
{
    int c=0;
    for(int i=0;i<str.length();i++)
    {
        int bit=str[i]-'a';
        
        if((c & (1<<bit))>0)
        return false;
        
        c=c|(1<<bit);
    }
    return true;
    
}
 
int main()
{
    string str = "SenthilnathanP";
 
    if (uniqueCharacters(str)) {
        cout << "The String " << str
             << " has all unique characters\n";
    }
    else {
        cout << "The String " << str
             << " has duplicate characters\n";
    }
    
    string str1 = "world";
    if (uniqueCharacters(str1)) {
        cout << "The String " << str1
             << " has all unique characters\n";
    }
    else {
        cout << "The String " << str
             << " has duplicate characters\n";
    }
    return 0;
}