#include <iostream>
using namespace std;

void push(int arr[], int maxSize, int usedSize, int &top)
{
    cout<<"Enter element "<<usedSize<<" Times "<<endl;
    if (maxSize > usedSize)
    {
        for (int i = 0; i < usedSize; i++)
        {
            cin >> arr[i];
            top++;
        }
    }
    else
    {
        cout << "Array is Overflow" << endl;
    }
}

void display(int arr[],int usedSize){
    for(int i=0;i<usedSize;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int max_size = 100;
    int used_size = 5;
    int top = -1;
    int arr[max_size];
    push(arr,max_size,used_size,top);
    display(arr,used_size);
    cout<<arr[--top];
}