#include<iostream>
using namespace std;

class animal{
    public:
        void makesounds(){
            cout<<"Animal Sounds"<<endl;
        }
};
class Dog : public animal{
    public:
        void makesound(){
            cout<<"Dogs barks"<<endl;
        }
};
class cat : public animal {
    public:
        void makessound(){
            cout<<"Cats Mews"<<endl;
            animal :: makesounds(); // by this functions of parent class can also be executed along with child's function
        }

};
int main(int argc, char const *argv[])
{
    animal a1;
    a1.makesounds();
    cout<<endl;

    Dog d1;
    d1.makesound();
    cout<<endl;

    cat c1;
    c1.makessound();
    cout<<endl;

    return 0;
}
