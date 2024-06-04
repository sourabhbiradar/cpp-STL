#include <iostream>
#include <set>
using namespace std;

int main() {
    // STL
    // containers >> associative containers >> set
    // set
    // ordered & no duplicates
    // keys are values itself
    // based on BST
    
    set<int> s = {4,3,3,5};
    for (int i : s){
        cout << i << " ";
    }cout << endl;
    
    // insert()
    s.insert(0);
    s.insert(-4);
    s.insert(71);
    s.insert(2);
    
    for (int i : s){
        cout << i << " ";
    }cout << endl;
    
    // find()
    auto f = s.find(7);
    if (f != s.end()) cout << "key found\n";
    else cout << " key not found\n";
    
    // count()
    cout << "find 71 :" << s.count(71) << endl; // 1==true
    
    // erase() using key
    s.erase(5); 
    
    // erase() using range
    auto start = s.begin();
    auto end = s.find(3);
    s.erase(start,end);  // from -4 to 3
    
   // erase() using iterator
    auto it = s.find(4);
    if (it != s.end()) {
    s.erase(it); // erased elem printed
    }
    
     for (int i : s){
        cout << "after erase : "<<i << "\n";
    }cout << endl;

    return 0;
}