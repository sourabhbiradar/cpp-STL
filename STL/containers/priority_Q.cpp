#include <iostream>
#include <queue>
using namespace std;

int main() {
    // STL
    // containers >> container adaptors >> priority_queue
    // priority_queue 
    // based on max heap
    
    // max heap
    priority_queue<int> maxpq ; // elems are arranged max to min
    
    // min heap
    priority_queue<int , vector<int> , greater<int>> minpq; // min to max
    
    // push()
    maxpq.push(12);
    maxpq.push(4);
    maxpq.push(-8);
    maxpq.push(5);
    
    // top()
    cout << "top :" << maxpq.top() << endl;
    
    // size()
    int size = maxpq.size();
    cout << "size :" << size << endl;
    
    // pop()
    for (int i =0;i<size;i++){
            cout << "top :" << maxpq.top() <<" ";
            maxpq.pop(); // top will be popped, next will be top ...
    }cout << endl;
    
    // empty()
    cout << "is empty : " << maxpq.empty() << endl; // 1 == true
    
    // minpq
    minpq.push(9);
    minpq.push(45);
    minpq.push(-12);
    minpq.push(0);
    
    cout << "minpq top :" << minpq.top() << endl;
    

    return 0;
}