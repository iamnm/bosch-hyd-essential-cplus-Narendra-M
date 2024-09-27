// InterfaceAssignment 
#include <iostream>
#include <string>

using namespace std;

class IPrinter{
    public:
    virtual ~IPrinter(){}
     virtual void print(string path)=0;
};

class IScanner{
    public:
    virtual ~IScanner(){}
     virtual void scan(string path)=0;
};




class Printer : public IPrinter{

    public:
     void print(string path){
        cout<<"Printing ....."<<path<<endl;
    }
};

class Scanner : public IScanner {

    public:
     void scan(string path){
        cout<<"Scanning ....."<<path<<endl;
   }
};

class PrintScanner : public IPrinter, public IScanner{
    Printer printerObj;
    Scanner scannerObj;
        
  public:
   void print(string path){
        printerObj.print(path);
    }
      void scan(string path){
        scannerObj.scan(path);
   }
 
    
};

 class TaskManager :public PrintScanner{
    public:
     static void execuctePrintTask(IPrinter *printer,string documentPath){
        printer->print(documentPath);
    }
     static void execucteScanTask(IScanner *scanner,string documentPath){
            scanner->scan(documentPath);
    }
};


    int main(){
        Printer printerObj;
        Scanner scannerObj;
        PrintScanner printScannerObj;

        TaskManager::execuctePrintTask(&printerObj,"Test.doc");
        TaskManager::execucteScanTask(&scannerObj,"MyImage.png");
        TaskManager::execuctePrintTask(&printScannerObj,"NewDoc.doc");
       TaskManager::execucteScanTask(&printScannerObj,"YourImage.png");

}
