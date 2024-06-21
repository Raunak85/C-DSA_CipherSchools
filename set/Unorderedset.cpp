#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> uset={3,2,1,6,7};
    uset.insert(23);
    for(int i: uset){
        cout<<i<<" ";
    }
}