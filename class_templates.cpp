#include<iostream>
using namespace std;

template <typename t>
class weight{
    private:
        t kg;
        int a;
    public:
        void setdata(t x){
            kg =x;
        }
        t getdata(){
            return kg;
        }
};


int main(int argc, char const *argv[])
{
    weight <int> w;
    w.setdata(5);
    cout<<"weight is: "<<w.getdata()<<endl;

    weight <double> w1;
    w1.setdata(55.45841);
    cout<<"weight is: "<<w1.getdata()<<endl;

    return 0;
}
