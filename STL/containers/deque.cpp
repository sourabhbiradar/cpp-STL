#include <iostream>
#include <deque>
using namespace std;

int main() {
    // STL
    // containers >> sequence containers >> deque
    // deque  [double-ended queue]
    
    deque<int> d;
    
    d.push_back(2);
    d.push_front(3);  // possible with deque
    
    d.pop_back();
    d.pop_front();  // possible with deque
    
    d.at(1); // d[1]
    
    d.front();
    d.back();
    
    d.empty();
    
    deque<int> newd = {33,44,55,66,77};
    for (int i:newd){
        cout << i << " ";
    }
    cout<<endl;
    
    // erase() [from-to]
    newd.erase(newd.begin(),newd.begin()+2);
    for (int i:newd){
        cout << i << " ";
    }
    cout << "erased from newd[0] to newd[2]" <<endl;
    
    // clear()
    newd.clear();
     for (int i:newd){
        cout << i;
    }
    cout << "cleared newd" <<endl;
    return 0;
}