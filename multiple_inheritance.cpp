#include<iostream>
using namespace std;

class a{
    public:
    void printmsg(){
        cout<<"class a print msg"<<endl;
    }
};
class b{
    public:
    void printmsg(){
        cout<<"class b print msg"<<endl;
    }
};
class ab : public a , public b{
    public:
        void printmsg(){
            a::printmsg();
            b::printmsg();  // this is multiple inheritance by the use ofscope resolution operator
            cout<<"class ab print msg"<<endl;
            }
};
int main(int argc, char const *argv[])
{
    ab obj;
    obj.printmsg();

    return 0;
}
