#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // STL
    // algorithm
    // min/max, reverse, rotate, sort, swap
    
    vector<int> v = {-13,5,17,9,1};
    
    auto vb = v.begin();
    auto ve = v.end();
    
    // sort()
    sort(vb,ve);
    for (int i : v){
        cout << "sorted :" << i << " ";
    }cout << endl;
    
    // min/max
    int a=4,b=7;
    cout << "max :" << max(a,b) << endl;
    cout << "min :" << min(a,b) << endl;
    
    // swap()
    swap(v[1],v[3]);
    for (int i : v){
        cout << "swap(5,9) :" << i << " ";
    }cout << endl;
    
    swap(a,b);
    cout << "after swap :" << a << " " << b << endl;
    
    // reverse
    string str = "operation";
    
    reverse(str.begin(),str.end());
    cout << "reversed :" << str << endl;
    
    // rotate
    rotate(str.begin(),str.begin()+4,str.end());
    cout << "rotated at str[2] :" << str << endl;
    
    return 0;
}