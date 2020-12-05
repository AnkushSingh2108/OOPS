/*
CONCEPT-> Pointer to object and passing object as argument and returning object
PROGRAM-> ComplexNumber         RealParts   ImaginaryParts
*/
#include<iostream>
#include<string>
using namespace std;

class ComplexNumbers{
    private:
        // DataMembers
    int real;
    float imaginary;
    public:
    ComplexNumbers(){
    }
    ComplexNumbers(int r, int i){
        real = r;
        imaginary = i;

    }

    void displayNumber(){
        cout<<"Complex Number is "<<real<<"+"<<imaginary<<"i"<<endl<<endl;
    } 
    int getrealpart(){
        return real;
    }
    float getimaginary(){
        return imaginary;
    }
    };
    ComplexNumbers add2number(ComplexNumbers n1, ComplexNumbers n2)  // PASSING OBJECTS AS ARGUMENTS IN FUNCTIONS
    {
        int r;
        float i;
        r = n1.getrealpart() + n2.getrealpart();
        i = n1.getimaginary() + n2.getimaginary();
        ComplexNumbers temp(r,i);
        return temp;  // RETURTNING THE OBJECTS IN FUNCTIONS
    }
int main(int argc, char const *argv[])
{
    ComplexNumbers comp1(5,4), comp2(4,4), comp3;
    comp3 = add2number(comp1,comp2);
    // doing the above same thing with the help of pointers
    cout<<"Pointer to object\n";
    ComplexNumbers *ptr1;
    ptr1 = &comp1;
    cout<<ptr1<<endl;
    ptr1->displayNumber();
    ptr1 = &comp2;
    cout<<ptr1<<endl;
    ptr1->displayNumber();
    ptr1 = &comp3;
    cout<<ptr1<<endl;
    ptr1->displayNumber();
    cout<<"ADDRESSES\n";
    cout<<"Value at "<<ptr1<<"is "<<&*ptr1<<endl;
    


    // normal calling 

    comp1.displayNumber();
    comp2.displayNumber();
    cout<<"ADDITION:\n";

    comp3.displayNumber();


    
    return 0;
}
