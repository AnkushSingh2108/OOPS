#include<iostream>
#include<string>
using namespace std;


class cars{
    
    private:  // this private will add a layer of security through which any class or function outside this cars class will not be able to access the followed MEMBER VARIABLES/ DATA MEMBERS
    string company_name;
    string fuel_type;
    string model_name;
    double mileage;
    int price;
    
    public:
        // these functions are known as MEMBER FUNCTIONS
        void setdata(string cname, string mname, string ftype, double mil, double price){
                // setting the data
                company_name = cname;
                model_name = mname;
                mileage = mil;
                price = price;
                fuel_type= ftype;
        }
        void DisplayData(){
            cout<<"Car properties"<<endl;
            cout<<"Car Company Name: "<<company_name<<endl;
            cout<<"Car Model: "<<model_name<<endl;
            cout<<"Car Fuel type: "<<fuel_type<<endl;
            cout<<"Car mileage: "<<mileage<<endl;
            cout<<"Car price:"<<price<<endl;

        }
};

int main(int argc, char const *argv[])
{
    cars car1; // Objects are nothing but variables of type class
    
    car1.setdata("Toyota","Alto","Petrol",520,12515);
    car1.DisplayData();
    return 0;
}
