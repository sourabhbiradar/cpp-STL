#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // STL
    // containers >> container adaptors >> stack
    // stack  
    // LIFO
    // last = top , first = bottom
    
    stack<string> stk;
//  stack<string> stk = {"D"};  // ERROR : can't initialize
    
    // push()
    stk.push("C");
    stk.push("B");
    stk.push("A");
    
    // top()
    cout << "top :" << stk.top() << endl; 
    
    // bottom() is not a member
    
    // pop()
    stk.pop(); // pops top elem
    cout << "top :" << stk.top() << endl; 
    
    stk.size();
    
    stk.empty();
    
    // print all ements
    while(!stk.empty()){
        cout << stk.top(); // print top element
        stk.pop(); // pop top element
    }
    cout << endl;

}