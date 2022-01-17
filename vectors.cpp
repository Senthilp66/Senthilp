#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector<int> myvector;
    myvector.push_back(1);
    myvector.push_back(2);
    myvector.push_back(3);
    myvector.push_back(4);
    myvector.push_back(5);
 
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
    
        cout << "\n";
    
    cout << myvector.size()<<"\n";
    
    vector<int>::iterator it;
 
    it = myvector.begin();
    myvector.erase(it);
 
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
        
        
        cout << "\n";
    myvector.pop_back();
 
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
        
    myvector.insert(myvector.begin(), 1);
    myvector.insert(myvector.begin()+4, 5);
    // inserting 1 at front and 5 at 5th position
    
     cout << "\n";
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
        
    myvector.clear();
    // vector becomes empty
    
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
        
    return 0;
}