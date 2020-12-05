#include<iostream>
using namespace std;

// Base Class
class shape{
    protected:
        int width;
        int height;
    public:
        void setwidth(int w){
            width = w;
        }
        void setheight(int h){
        height = h;
        }

};

// Derived Class
class rectangle: public shape{
    public:
        int GetArea(){
            return (width*height);
        }
};
int main(int argc, char const *argv[])
{
    rectangle r;
    r.setheight(5);
    r.setwidth(7);
    // Printing the area of the object
    cout<<"total area: "<<r.GetArea()<<endl;
    return 0;
}
