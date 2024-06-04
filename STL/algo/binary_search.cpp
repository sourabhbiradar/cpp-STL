#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // STL
    // algorithm
    // binary_search [from ,to ,what]
    
    vector<int> v = {1,3,5,7,9,11};
    
    auto vb = v.begin();
    auto ve = v.end();
    
    cout<<"search 5 :" <<binary_search(vb,ve,5) << endl; // 1 == true
    
    cout<<"search 5 :" <<binary_search(vb+3,ve,5) << endl; // 0 
    
    cout<<"search 12 :" <<binary_search(vb,ve,12) << endl; // 0

    // lower_bound()
    cout<<"lower bound :" <<lower_bound(vb,ve,41)-vb << endl; // *v[5]
    cout<<"lower bound :" <<lower_bound(vb,ve,17)-vb << endl; // *v[3]
    cout<<"lower bound :" <<lower_bound(vb,ve,22)-vb << endl; // *v[5]
    cout<<"lower bound :" <<lower_bound(vb,ve,11)-vb << endl; // *v[0]
    
    // upper_bound()
    cout<<"upper bound :" <<upper_bound(vb,ve,11)-vb << endl; // *v[1]
    cout<<"upper bound :" <<upper_bound(vb,ve,17)-vb << endl; // *v[4]
    cout<<"upper bound :" <<upper_bound(vb,ve,22)-vb << endl; // *v[5]
    cout<<"upper bound :" <<upper_bound(vb,ve,41)-vb << endl; // *v[6] ??
    cout<<"lower bound :" <<lower_bound(vb,ve,44)-vb << endl; // *v[6] ??
    cout<<"lower bound :" <<lower_bound(vb,ve,10)-vb << endl; // *v[0]

    
    
    return 0;
}