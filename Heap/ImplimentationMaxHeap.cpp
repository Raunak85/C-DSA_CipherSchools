#include <iostream>
using namespace std;

class MaxHeap
{
public:
    int arr[100];
    int size;

    MaxHeap()
    {
        size = 0;
        arr[0] = -1;
    }

    void insert(int val)
    {
        size += 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else return;
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    MaxHeap m;
    m.insert(4);
    m.insert(8);
    m.insert(5);
    m.insert(10);
    m.insert(7);
    m.print();
}