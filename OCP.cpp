// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Vehicle{
    protected:
    Vehicle(){}
 public:
    void start(){
        this->start();
    }
   void drive(){
       this->drive();
    }
    void stop(){
        this->stop();
    }

};
class Car:public Vehicle{
    public: void Start(){
        cout<<"Car Push Button Start"<<endl;
    }
     void drive(){
        cout<<"FWD Drive"<<endl;
    }
    void stop(){
        cout<<"Stop"<<endl;
    }
};
class Truck:public Vehicle{
    public: void start(){
        cout<<"Key Start"<<endl;
    }
    void drive1(){
        cout<<"RWD Drive"<<endl;
    }
    void stop1(){
        cout<<"Stop"<<endl;
    }
};
class Bus:public Vehicle{
    public: void start(){
        cout<<"Key  Start"<<endl;
    }
    void drive(){
        cout<<"RWD Drive"<<endl;
    }
    void stop(){
        cout<<"Stop"<<endl;
    }
};

class VehicleDrivingSimulator{
  public :
  void startSimulation(Vehicle* vehicleAddress){
      vehicleAddress->start();
      vehicleAddress->drive();
      vehicleAddress->stop();
  }
 
 };

int main(){
Car carObj;
Truck truckObj;
Bus busObj;
VehicleDrivingSimulator simulator;

simulator.startSimulation(&carObj); // "Car Push Button Start,FWD Drive , Stopped
simulator.startSimulation(&truckObj); // "Key Start,RWD Drive , Stopped;
simulator.startSimulation(&busObj);// "Key Start,RWD Drive , Stopped;

}
