// friend functions
#include<iostream>
using namespace std;



class distance{
    private:
        int meters;
    public:
    distance()
    {
        meters = 0;
    }
    void DisplayData()
    {
        cout<<"Meters value: "<<meters;
    }
    // function prototype or signature
    friend void addvalue(distance &d);

};

void addvalue(distance &d)
{
    d.meters = d.meters+5;
}


int main(int argc, char const *argv[])
{
    distance d1;  // meters = 0
    d1.DisplayData();  // 0

    // friend function call
    addvalue(d1); // pass by reference
    d1.DisplayData();

    return 0;
}
