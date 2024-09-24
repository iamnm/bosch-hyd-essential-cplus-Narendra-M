// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

class BankCustomer{
    private:
        string name;
        string adharNumber;
        string panNumber;
        string emailId;
        string phoneNumber;
    
    public:
    BankCustomer() {
        this->name="";
        this->adharNumber="";
        this->panNumber="";
        this->emailId="";
        this->phoneNumber="";
        cout<<"BankCustomer()"<<endl;
    }
    //Compile Time Polymorphism , constructor Overloading
    BankCustomer(string nameArg,string adharNumberArg,string panNumberArg):BankCustomer(){
        this->name=nameArg;
        this->adharNumber=adharNumberArg;
        this->panNumber=panNumberArg;
         cout<<"BankCustomer(string nameArg,string adharNumberArg,string panNumberArg)"<<endl;
       
    }
       BankCustomer(string nameArg,string adharNumberArg,string panNumberArg,string emailArg,string phoneArg):BankCustomer(nameArg, adharNumberArg, panNumberArg){
        this->emailId=emailArg;
        this->phoneNumber=phoneArg;
        cout<<"BankCustomer(string nameArg,string adharNumberArg,string panNumberArg,string emailArg,string phoneArg)"<<endl;
        
    }
 
    
    void printCustomerInfo(){
            cout<<endl<<"-------CustomerInfo--------"<<endl;
            cout<<"Name          :   "<<this->name<<endl;
            cout<<"Adhar Number  :"<<this->adharNumber<<endl;
            cout<<"PAN Number    :"<<this->panNumber<<endl;
            cout<<"Email Id ::"<<this->emailId<<endl;
            cout<<"Phone Number ::"<<this->phoneNumber<<endl;
            
            
    }
    
};

int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";
    BankCustomer objBankCustomer("Narendra M", "123456", "9898552233", "email@gmail.com", "044-2532156");
    objBankCustomer.printCustomerInfo();
    return 0;
}