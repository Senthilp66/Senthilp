#include <iostream>
#include <set>
using namespace std;
 
int main()
{
    set<int> myset;
       myset.insert(1);
       myset.insert(2);
       myset.insert(3);
       myset.insert(4);
       myset.insert(5);
 
    for (auto it = myset.begin(); it != myset.end(); ++it)
        cout << ' ' << *it;
        
        cout<<"\n";
    cout<<myset.size()<<"\n";
    
    set<int>::iterator it1, it2;
 
    it1 = myset.begin();
    it2 = myset.end();
 
    it1++;
    it2--;
    it2--;
 
    myset.erase(it1, it2);
    for (auto it = myset.begin(); it != myset.end(); ++it)
        cout << ' ' << *it;
    
    set<int> set2;    
    set2.insert(myset.find(1), myset.end());
 
    cout << "\nThe elements in set2 are: ";
    for (auto it = set2.begin(); it != set2.end(); it++)
        cout << *it << " ";
    
    auto it = myset.lower_bound(1);
    if (it != myset.end()) {
        cout << "\nThe lower bound of key 1 is ";
        cout << (*it) << endl;
    }
    else
        cout << "The element entered is larger than the "
                "greatest element in the set"<< endl;
    
    it = myset.lower_bound(2);
    if (it != myset.end()) {
        cout << "The lower bound of key 2 is ";
        cout << (*it) << endl;
    }
    else
        cout << "The element entered is larger than the "
                "greatest element in the set"<< endl;
 
    it = myset.lower_bound(6);
    if (it != myset.end()) {
        cout << "The lower bound of key 6 is ";
        cout << (*it) << endl;
    }
    else
        cout << "The element is larger than the greatest "
                "element in the set"<< endl;
    
    it = myset.upper_bound(1);
    cout << "\nThe upper bound of key 1 is ";
    cout << (*it) << endl;
  
    it = myset.upper_bound(3);
    cout << "The upper bound of key 3 is ";
    cout << (*it) << endl;   
    
    myset.clear();
    for (auto it = myset.begin(); it != myset.end(); ++it)
        cout << ' ' << *it;
    return 0;
}