#include <iostream>
#include <utility>
using namespace std;
 
int main()
{   
    pair<int, char> PAIR1( 1, 'S');
 
    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;
    
    pair<string, double> PAIR2("World", 1.23);
 
    cout << PAIR2.first << " ";
    cout << PAIR2.second << endl;
    
    pair<string, double> PAIR3(PAIR2);
    
    cout << PAIR3.first << " ";
    cout << PAIR3.second << endl;
    
    pair<char, int> pair1 = make_pair('A', 1);
    pair<char, int> pair2 = make_pair('B', 2);
 
    cout << "Before swapping:\n ";
    cout << "Contents of pair1 = " << pair1.first << " "<< pair1.second;
    cout << "\n Contents of pair2 = " << pair2.first << " "<< pair2.second;
         
    pair1.swap(pair2);
 
    cout << "\nAfter swapping:\n ";
    cout << "Contents of pair1 = " << pair1.first << " "
         << pair1.second;
    cout << "\n Contents of pair2 = " << pair2.first << " "
         << pair2.second;
         
    
    return 0;
}