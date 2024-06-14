#include<iostream>
using namespace std;

class Base{
    public:
    int x=9;
    protected:
    int y;
    private:
    int z;

};

class Child1 : public Base{
    // x public; --- access
    // y protected; ----- access
    // z private;  -------- cann't

};
class Child2 : protected Base{
    // x protected; --- access
    // y protected; ----- access
    // z private;  -------- cann't

};

class Child2 : private Base{
    // x private; --- access
    // y private; ----- access
    // z private;  -------- cann't

};



int main(){

}