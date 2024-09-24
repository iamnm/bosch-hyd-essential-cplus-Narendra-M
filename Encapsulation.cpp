// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

class Door{
    //information Handling
  private:  
    
   string status;
  //default Interface(Public view) of an Object
  public:
  //Default Constructor
  Door(){
      this->status="Closed";
  }
  //void setStatus(string newStatus,Door *this)
  void setStatus(string newStatus){
   this->status=newStatus;
  }
  //string getCurrentStatus(Door *this){
  string getCurrentStatus(){
      
      return this->status;
}

//Destructor
  ~Door(){
      //Clean up
      cout<<"Object Cleaned Up"<<endl;
  }
};
void allocate_heap(){
   Door *doorObjPtr=new Door();
   doorObjPtr->setStatus("Close");
   cout<<doorObjPtr->getCurrentStatus()<<endl;
   delete doorObjPtr;
}
void allocate(){
       Door doorObj;// Door::Door()
       string newStatus="Open";
       doorObj.setStatus(newStatus);// Door::setStatus("Open",&doorObj)
       cout<<doorObj.getCurrentStatus()<<endl;//Door::getCurrentStatus(&doorObj)
    
}
int main() {
    allocate_heap();
    return 0;
}
