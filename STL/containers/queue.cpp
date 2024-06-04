#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    // STL
    // containers >> container adaptors >> queue
    // queue 
    // FIFO
    
    queue<string> q ;
    
    // push()
    q.push("A");
    q.push("B");
    q.push("C");
    
    // front() & back()
    cout << "front :" << q.front() <<endl;
    cout << "back :" << q.back() <<endl;
    
    // pop()
    q.pop(); // pops first elem
    cout << "front :" << q.front() <<endl;
    
    q.size();
}