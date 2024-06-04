#include <iostream>
#include <array>
using namespace std;

int main() {
    // STL
    // containers >> sequence containers >> array
    // array
    
    int Tarr[4]= {4,-9,3,6}; // traditional
    
    // STL
    array<int,4> arr = {10,20,30,40};  // array <type,size> name
    
    // size 
//  cout << "Tarr size :" << Tarr.size() << endl; // ERROR : non-class type
    cout << "arr size :" << arr.size() << endl; // 4
    
    // access
    cout << "Tarr[1] :" << Tarr[1] << endl;
    cout << "arr[1] :" << arr[1] << endl;
    
    // at
//  cout << "Tarr.at(2) :" << Tarr.at(2) << endl; // non-class type
    cout << "arr.at(2) :" << arr.at(2) << endl;
    
    // empty()
//  cout << "is empty or not :" << Tarr.empty() << endl; // non-class type
    cout << "is empty or not :" << arr.empty() << endl;
    
    // front() & back()
//  cout << "Tarr front() :" << Tarr.front() << endl;// non-class type
    cout << "arr back() :" << arr.back() << endl;
    
}