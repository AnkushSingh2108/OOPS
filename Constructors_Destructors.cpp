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
        // DEFAULT CONSTRUCTOR
        cars() {
            cout<<"Default constructor is called\n";
            company_name = "Toyota";
        }
        // PARAMETERIZED CONSTRUCTOR
        cars(string cname,string mname, string ftype, double mil, double p){
            cout<<"Parameterized constructor is called\n";
            company_name = cname;
            model_name = mname;
            mileage = mil;
            price = p;
            fuel_type= ftype;
        }  
        // COPY CONSTRUCTOR
        cars(cars &obj)
        {
            cout<<"Copy constructor is called\n";  
            company_name = obj.company_name;          
            model_name = obj.model_name;
            mileage = obj.mileage;
            price = obj.price;
            fuel_type= obj.fuel_type;
        }
        
        // these functions are known as MEMBER FUNCTIONS
        void setdata(string cname, string mname, string ftype, double mil, double p){
                // setting the data
                company_name = cname;
                model_name = mname;
                mileage = mil;
                price = p;
                fuel_type= ftype;
        }
        void DisplayData(){
            cout<<"Car properties"<<endl;
            cout<<"Car Company Name: "<<company_name<<endl;
            cout<<"Car Model: "<<model_name<<endl;
            cout<<"Car Fuel type: "<<fuel_type<<endl;
            cout<<"Car mileage: "<<mileage<<endl;
            cout<<"Car price:"<<price<<endl<<endl;

        }
        // DESTRUCTOR
        ~cars(){
            cout<<"Destructor called\n"; // destructor's code will execute at every end of the program which is called in the main  destructors are called explicitly
        }

};

int main(int argc, char const *argv[])
{
    cars car1, car2("India FOR CAR2","fortuner","petrol",50,1500000); // Objects are nothing but variables of type class
    car1.setdata("Toyota FOR CAR1","Alto","Petrol",520.5,12515);
    car1.DisplayData();
    car2.DisplayData(); //for car2 also the same hard coded values which were for car1 are called 
    cars car3 = car1; // copy consctructor->  copy data from car1 to car3 -> car1 will be the passed as a object in copy constructor's code
    car3.DisplayData();
    return 0;
}
