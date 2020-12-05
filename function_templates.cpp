#include<iostream>
using namespace std;
/*
int add(int x, int y){
    return (x+y);
}
float add(float x, float y){
    return(x+y);
}
double add(int x, int y){
    return(x+y);
}
*/
template <typename T, typename a>
a add(T x, a y)
{
    return (x+y);
}
int main(int argc, char const *argv[])
{
    cout<<"Addition of 2 integers "<<add<double, int>(3.2,4)<<endl;
    // cout<<"Addition of 2 float variables "<<add<float>(3.4f,4.5f)<<endl;
    // cout<<"Addition of 2 double variables "<<add<double>(3.4,4.59)<<endl;
    return 0;
}
