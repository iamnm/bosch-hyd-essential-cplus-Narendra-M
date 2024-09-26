// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
//interface -> Abstarction
using namespace std;

class ISpeedBreachObserver{
    public:
    virtual ~ISpeedBreachObserver(){}
     virtual void notify(int currentSpeed)=0;
};

class SpeedBreachHanlder{
    private:
    vector<ISpeedBreachObserver*> observers;
    public:
        void subscribe(ISpeedBreachObserver* observer){
            this->observers.push_back(observer);
        }
        void unSubscribe(ISpeedBreachObserver* observer){
            
        }
        void breeach(int currentSpeed){
            //iterate observers
             for (ISpeedBreachObserver* observer: observers){
                 observer->notify(currentSpeed);
             }
    
    }
    
};
class UpdateCluster:public ISpeedBreachObserver{
    public:
     void notify(int currentSpeed) {
         cout<<"Updating Cluster "<<currentSpeed<<endl;
     }
    
};
class SpeedController:public ISpeedBreachObserver{
    public:
     void notify(int currentSpeed) {
         cout<<"Speed Controller  "<<currentSpeed<<endl;
     }
    
};

int main() {
    // Write C++ code here
    SpeedBreachHanlder subject;
    UpdateCluster observer1;
    SpeedController observer2;
    subject.subscribe(&observer1);
    subject.subscribe(&observer2);
    
    subject.breeach(150);
    return 0;
}
