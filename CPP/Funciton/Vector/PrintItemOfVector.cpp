#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1 {1,2,3,4,5};
    v1.push_back(10); // append 10 at last
    // cout<<v1.at(0)<<endl; // accessing element in vector with at function
    // cout<<v1.at(30); // will give warning that we cant access element which is out of bound
    // v1.at(2)  = 23; // it will change the element which is present at 3 index;
    // v1.pop_back();  // will delete at last element of vector
    // cout<<v1.size()<<endl;  // return the size of vector
    cout<<v1.capacity()<<endl;  // capacity return the double of size which is store in memory for vector
    vector<int>::iterator itr;  // for iterating the vector
    itr = v1.end()-1;
    cout<<*itr<<endl;
    for(int item: v1){
        cout<<item<<" ";
    }
}