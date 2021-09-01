#include <iostream>
using namespace std;
class Figure{
public:
    virtual void area() = 0;
    virtual ~Figure(){
        cout << "~Figure" << endl;
    }
};
class Parallelogram : public Figure{
protected:
    int a;       
    int h;  
public:
    Parallelogram(int v_base, int v_height) :a(v_base), h(v_height) {}
        void area() override{
            cout << "Parallelogram area: " << a * h <<endl;
        }
};
class Circle : public Figure{
    double r;
    double P;
public:
    Circle(double v_radius) : r(v_radius) {}
    void area() override
    {
        cout <<"Circle area: " << 3.1415 * (r * r) <<endl;
    }
};
class Rectangle : public Parallelogram{
public:
    Rectangle(int v_base, int v_height) : Parallelogram(v_base,v_height) {}
    void area() override
    {
        cout <<"Triangle area: " << a * h <<endl;
    }
};
class Square : public Parallelogram{
public:
    Square(int v_base, int v_height) : Parallelogram(v_base,v_height) {}
    void area() override{
        cout << "Square area: " << a * h << endl;
    }
};
class Rhombus : public Parallelogram{
public:
    Rhombus(int v_base, int v_height) : Parallelogram(v_base,v_height) {}
    void area() override{
        cout <<"Rhombus area: " << a * h << endl;
    }
};

class Car{
    private:
        int company, model;
    public:
        Car(){company = 0, model = 0;}
};
class PassengerCar : public Car{
    private:
        int company; 
        int model;
    public:
    PassengerCar(){company = 0, model = 0;}

    
    
    void setCar(int car_comp, int car_mod)
    {
        car_comp = company;
        car_mod = model;
    }
    void getCar() 
    {
        cout << "Passenger car: " << company << "/" << model << endl;
    }
};
class Bus : public Car{
    private:
        int company; 
        int model;
    public:
    Bus(){company = 0, model = 0;}

    Bus(int company, int model )
    {
        setCar(company, model);
    }
    
    void setCar(int car_comp, int car_mod)
    {
        car_comp = company;
        car_mod = model;
    }
    void getCar() 
    {
        cout << "Passenger car: " << company << "/" << model << endl;
    }
};
class Minivan : public PassengerCar, public Bus{
    private:
        int company; 
        int model;
    public:
    Minivan(){company = 0, model = 0;}

    Minivan(int company, int model )
    {
        setCar(company, model);
    }
    
    void setCar(int car_comp, int car_mod)
    {
        car_comp = company;
        car_mod = model;
    }
    void getCar() 
    {
        cout << "Passenger car: " << company << "/" << model << endl;
    }
};


class Fraction{

};
int main(int argc, char const *argv[]){
    int company;
    int model;
    cout << "Enter the names of the Passenger car.\n" << endl;
    cout << "Company: "; cin >> company;
    cout << "Model:"; cin >> model;

    PassengerCar car;
    car.setCar(company, model);
    car.getCar();

    //Bus bus;
    //bus.setCar(company, model);
    //bus.getCar();

    //Minivan minivan;
    //minivan.setCar(company, model);
    //minivan.getCar();
    
    return 0;
}
