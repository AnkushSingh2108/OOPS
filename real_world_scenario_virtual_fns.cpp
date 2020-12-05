// bcoz of virtual function only the pointers to different classes are applied. if the animal;s eat function was not virtual then through any pointer the base class function will only be called
#include<iostream>
using namespace std;

// base class
class animal{
    public:
        virtual void eat(){
            cout<<"I'm eating generic food"<<endl;
        }

};

class cat : public animal{
    public:
        void eat(){
            cout<<"I'm eating cat food"<<endl;
        }
};
class dog : public animal{
    public:
        void eat(){
            cout<<"I'm eating dog food"<<endl;
        }
};
void func1(animal *xyz){
    xyz->eat();

}
int main(int argc, char const *argv[])
{
    animal *ptr;
    cat catobj;
    dog dogobj;

    ptr = &catobj;
    func1(ptr);

    ptr = &dogobj;
    func1(ptr);
    return 0;
}
