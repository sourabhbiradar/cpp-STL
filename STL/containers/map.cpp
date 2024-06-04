#include <iostream>
#include <map>
using namespace std;

int main() {
    // STL
    // containers >> associative containers >> set
    // map
    // key-value pair
    // based on red-black tree 
    
    map<int,string> m = {{3,"three"},{2,"two"}};
    
    m[0]="zero";
    m[10]="ten";
    
    //insert()
    m.insert({11,"eleven"});
    
    for (auto itr:m){
        cout <<itr.first <<" : "<<itr.second << " "; // key = itr.first 
    }cout <<endl;
    
    // count()
    cout << "finding 10 :" << m.count(10) <<endl;
    
    // erase()
    m.erase(11);
    for (auto itr:m){
        cout <<"after erase :"<<itr.first << " "; // erased 11 
    }cout <<endl;
    
    // find()
    auto itr = m.find(2);
}