#include<iostream>
using namespace std;

class mybase{
    public:
    void show(){
        cout<<"Base class show function called:)"<<endl;
    }
    virtual void print() // VIRTUAL FUNCTION
    {
        cout<<"Base class print function called:)"<<endl;        
    }
};

class myderived : public mybase{
    void show(){
        cout<<"Derived class show function called:)"<<endl;
    }
    void print(){
        cout<<"Derived class print function called:)"<<endl;        
    }
};

int main(int argc, char const *argv[])
{
    mybase *baseptr;
    myderived derivedobj;

    baseptr = &derivedobj;
    // run time polymorphism
    baseptr ->print();
    baseptr ->show();

    return 0;
}
