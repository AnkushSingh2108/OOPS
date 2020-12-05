#include<iostream>
using namespace std;

class mybaseclass{
    public:
        int x;
        mybaseclass(){
            x = 5;
            y = 5;
            z = 5;
        }
        void printprotecteddata(){
            cout<<"Y: "<<y<<endl;
        }

    protected:
        int y;

    private:
        int z;
};

void myoutsidefunction(mybaseclass obj)
{
    //cout<<"X: "<<obj.x<<endl;
    obj.printprotecteddata();
    // cout<<"Z: "<<obj.z<<endl;
}

class myderivedclas1 :public mybaseclass{
    /*
    public int x;
    protected int y;
    */
};

// class myderivedclas2 : protected mybaseclass{
//     /*
//     public int x;
//     protected int y;
//     */
// };

// class myderivedclas3 : private mybaseclass{
//     /*
//     public int x;
//     protected int y;
//     */
// };
// void myoutsidefnofderivedclass(myderivedclas obj2)
// {
//     obj2.
// }
int main(int argc, char const *argv[])
{
    mybaseclass obj1;
    myoutsidefunction(obj1);

    myderivedclas1 obj2;
    cout<<"X: "<<obj2.x<<endl;
/*
    myderivedclas2 obj3;
    cout<<"X: "<<obj3.printprotecteddata<<endl;

    myderivedclas3 obj4;
    cout<<"X: "<<obj4.printprotecteddata<<endl;
*/

    return 0;
}
