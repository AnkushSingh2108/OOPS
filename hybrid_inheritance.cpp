#include<iostream>
using namespace std;


class base{
    protected:
        int var;

};
class derived1 : virtual public base{
    public:
        derived1(){
            var =1;
        }
        void getval()
            {
                cout<<"The value of var from derived1 is "<<var<<endl;
            }
};
class derived2 : virtual public base{
    public:
        derived2(){
            var =2;

        }
        void getval()
            {
                cout<<"The value of var from derived2 is "<<var<<endl;
            }
};
class derived3 : public derived2 , public derived1{
    // 2 copies of val in derived3 (from derived1 and derived2) of whom both with same name and different value
    // The right most class's value is allocated to the child class in HYBRID INHERITANCE when virtual keyword is written at the time if inheriting to all the inheriting classes if not then the value allocation will be of the class whose object is crerated at the time of scope resolution
    // without virtual keyword while inheriting IN CASE OF HYBRID INHERITANCE allocation of the values will of whom the scope resolution is done
    public:
        void getval(){
            cout<<"The value of val is ";
            derived2::getval();
        }
};
int main(int argc, char const *argv[])
{
    derived3 d3;
    d3.getval();
    return 0;
}
