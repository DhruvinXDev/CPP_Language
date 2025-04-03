#include <iostream>
#include<queue>
using namespace std;

class fuel {
    string fuel_type;
    public :
    fuel(string fuel) : fuel_type(fuel) { }
    void display_fuel() const 
    {
        cout <<"Fuel type is : "<<fuel_type<<endl;
    }
};
class brand {
    string brand_type;
    public :
    brand(string brand) : brand_type(brand) { }
    void display_brand() const
    {
        cout <<"brand is : "<<brand_type<<endl;
    }
};

class car : public fuel , public brand
{
    string car_name;
    public :
    car(string f , string b, string c) : fuel(f) , brand(b) , car_name(c){}
    void display_car() const 
    {
        cout << "Car model is : "<< car_name<<endl;
        display_brand();
        display_fuel();
    }
};
int main() {
    queue<car> q;
    q.push(car("petrol","bmw","m330 d i"));
    q.push(car("Petrol","Compact SUV","Fronx"));
    q.push(car("diesel","rolls royce","phantom"));
    q.push(car("electrical","kia","ev6"));
    
    while (!q.empty())
    {
        car c = q.front();
        cout<<"------------------------------------------------------------"<<endl;
        c.display_car();
        q.pop();
    }
    return 0;
}
