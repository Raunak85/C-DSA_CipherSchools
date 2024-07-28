#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string AddString(string n1,string n2){
    string result;
    int p1 = n1.size()-1;
    int p2 = n2.size()-1;
    int c = 0;
    while(p1>=0 || p2>=0 || c!=0){
        int s1 = (p1>=0)? n1[p1--] - '0' : 0;
        int s2 = (p2>=0)? n2[p2--] - '0' : 0;
        int s = s1+s2+c;
        c = s/10;
        s = s%10;
        result += (s + '0');
    }
    reverse(result.begin(),result.end());
    return result;
}


int main(){
    string n1 = "123",n2 = "127"; // ------ result =   250 ;
    string sum = AddString(n1,n2);
    cout<<sum;
}