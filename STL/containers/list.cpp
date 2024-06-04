#include <iostream>
#include <list>
using namespace std;

int main() {
    // STL
    // containers >> sequence containers >> list
    // list  
    // implemented using doubly linked list
    
    list<int> ls;
    
    list<int> ls2(5,100); // size 5 , all 100
    
    ls.push_back(2);
    ls.push_front(1);
    
    ls.pop_back();
    ls.pop_front();
    
    ls.size();
    
//  cout << "l[0] :" << l[0]; no indexing in list

    ls.front();
    ls.back();
    
    ls.begin(); 
    ls.end();
    
    ls.empty(); // [from,to]
    
}