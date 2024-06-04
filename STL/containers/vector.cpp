#include <iostream>
#include <vector>
using namespace std;

int main() {
    // STL
    // containers >> sequence containers >> vector
    // vector
    
    vector<int> v={11,12,13,14};
    
    vector<int> v1(5,1); // size =5 , all elemenst =1 
    cout << "v1 :" << v1[3] <<endl;
    
    // size() & capacity()
    cout << "size :" << v.size() << endl;
    cout << "capacity :" << v.capacity() << endl;
    
    // push_back()
    v.push_back(15); // adds 15 to end of list
    cout << "v[4] :" << v[4] << endl;
    
   cout << "new size :" << v.size() << endl;
   cout << "new capacity :" << v.capacity() << endl; // doubled
   
   // pop_back()
   v.pop_back(); // deletes last elem
   
   for (int i:v){
       cout << "after pop :"<<i<<endl;
   }
   
   // front() & back()
   cout << "front & back elements :" << v.front() <<" & " << v.back() << endl;
   
   // at()
   cout << "v.at(1) :" << v.at(1) <<endl;
   
   // clear()
   v.clear();
   cout << "after clear size :" << v.size() << endl;
   cout << "after clear capacity :" << v.capacity() << endl; // same
   
   // copy
   vector<int> cpv1(v1);
   for (int i:cpv1){
       cout << "copied v1 :"<<i<<endl;
   }

    // shrink_to_fit()
    vector<int> v3= {22,33,44};
    cout << "size & capacity :" << v3.size() <<" & " << v3.capacity()<<endl;
    
    v.push_back(55);
    cout << "size & capacity :" << v3.size() <<" & " << v3.capacity()<<endl;
    
    v.shrink_to_fit();
    cout << "size & capacity :" << v3.size() <<" & " << v3.capacity()<<endl;
}