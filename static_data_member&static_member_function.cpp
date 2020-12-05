#include<iostream>
using namespace std;

class myclass{
    private:
        int x;
        static int count;  // static data member
    public:
        myclass(){
            count++;
        }
        
        static int getcount()   // static member function
        {
            return count;
        }
};
// initialization
int myclass :: count=0;
int main(int argc, char const *argv[])
{
    cout<<"Initial count "<<myclass::getcount()<<endl;
    myclass obj, obj1;
    cout<<"Count after two object: "<<myclass::getcount()<<endl;
    return 0;
}
