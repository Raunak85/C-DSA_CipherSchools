#include<iostream>
using namespace std;

int MaxCharOccur(string str){
    int max =0;
    int indx = 0;
    for(int i=0;i<str.length();i++){
        int count =0;
        for(int j=0;j<str.length();j++){
            if(str[i] == str[j]){
                count++;
            }
        }
        if(count>max){
            indx = i;
            max = count;
        }

    }

    return indx;
}

int main(){
    string name = "raunak";
    int ind = MaxCharOccur(name);
    if(ind != 0){

    cout<<name[ind];
    }
    else{
        cout<<"string = "<<name<<endl;
        cout<<"Every character in string occur same time"<<endl;
    }
}