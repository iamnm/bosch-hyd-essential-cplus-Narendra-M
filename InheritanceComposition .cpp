// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Device{
  protected:
    string assetId,model;
  public:
    Device(string  assetIdArg,string modelArg): assetId{assetIdArg},model{modelArg}{
        cout<<"Device Instantiated"<<endl;
    }
  
    ~Device(){
        cout<<"Device Destructed"<<endl;
    }
};
class Printer:public Device{
  public:
    Printer(string  assetIdArg,string modelArg):Device::Device(assetIdArg,modelArg){
        cout<<"Printer Instantiated"<<endl;
    }
    void print(string content){ cout<<"Printer Printing "<<content<<endl;
    }
    ~Printer(){
        cout<<"Printer Destructed"<<endl;
    }
};

class Scanner:public Device{
 
  public:
    Scanner(string  assetIdArg,string modelArg): Device::Device(assetIdArg,modelArg){
        cout<<"Scanner Instantiated"<<endl;
    }
    void scan(string content){ cout<<"Scanner Scanning "<<content<<endl;
    }
    ~Scanner(){
        cout<<"Scanner Destructed"<<endl;
    }
};


class PrintScanner{
    private : 
    Printer* PrinterObj;
    Scanner* ScannerObj;
    
    public:
    PrintScanner(string assetId,string model){
        PrinterObj= new Printer("P1", "HP");
        ScannerObj= new Scanner ("S1", "HP");
        cout<<"PrintScanner Instantiated"<<endl;
    }
    
    string getModelName(){
    //    return this->model;
    return "";
    }
    ~PrintScanner(){
        delete PrinterObj;
        delete ScannerObj;
        cout<<"Print Scanner Destructed"<<endl;
    }
};


int main() {
   PrintScanner psObj{"PS1","HP"};

    return 0;
}
