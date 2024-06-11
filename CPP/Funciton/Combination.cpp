#include<iostream>
using namespace std;

int factOfN(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *=i;
    }
    return fact;
    
}

void Combination(int n,int r){
    int N = factOfN(n);
    int dem = factOfN(r)*(factOfN(n-r));

    float result = (N/dem);

    cout<<"Combination of "<<n<<" and "<<r<<" = "<<result;
}
int main(){
    int n,r;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    cout<<"Enter value of r"<<endl;
    cin>>r;
    Combination(n,r);

}