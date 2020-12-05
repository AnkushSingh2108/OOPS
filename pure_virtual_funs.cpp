#include<iostream>
using namespace std;

class shape {
    public:
    virtual void getarea()=0; // PURE VIRTUAL FUNCTION

};

class circle : public shape{
    public:
    void getarea(){
        cout<<"Enter circle radius\n";
        int r;
        cin>>r;
        cout<<"Area of circle is "<<(3.14159*r*r);
    }
};
class rectangle : public shape{
    public:
    void getarea(){
    cout<<"Enter the length and breadth of the rectangle\n";
    int l,b;
    cin>>l>>b;
    cout<<"The area of the rectangle is "<<(l*b)<<endl;

    }

};
int main(int argc, char const *argv[])
{
    circle c1;
    c1.getarea();

    rectangle r;
    r.getarea();
    return 0;
}
