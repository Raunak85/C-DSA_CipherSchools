#include<iostream>
using namespace std;

void fact(int a){
    int fact=1;
    
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    cout<<"Factorial of "<<a<< " = "<<fact;
    
}
int main(){
    int f;
    cout<<"Enter any value"<<endl;
    cin>>f;
    fact(f);
}