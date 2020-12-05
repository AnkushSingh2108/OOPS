#include<iostream>
using namespace std;

class complex {
    private:
        int real,imag;
    public:
        complex(int r, int i){
            real = r;
            imag = i;
        }
        void print(){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
        // operator overloading syntax --->  return_type operator operator_to_be_overloaded(datatype OR arguments <----- its optional as the arguments of simple function)
        complex operator +(complex c)
        {
            
            complex temp;
            temp.real = real+c.real;
            temp.imag = imag+c.imag;
            return temp;
        }
};
int main(int argc, char const *argv[])
{
    complex c1(5,4);
    complex c2(8,9);
    complex c3();
    c3 = c1+c2;  // c3 = c1.add(c2)  
     // the c++ operators do not directly operate on object as they operate on primitive datatypes
    c3.print();
    return 0;
}
