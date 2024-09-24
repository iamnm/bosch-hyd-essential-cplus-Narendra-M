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
 
friend std::ostream& operator<<(std::ostream& os, const BankCustomer& BankCustomerArg);
    
};

std::ostream& operator<<(std::ostream& os, const BankCustomer& BankCustomerArg){
            os<<endl<<"-------CustomerInfo--------"<<endl;
            os<<"Name          :   "<<BankCustomerArg.name<<endl;
            os<<"Adhar Number  :"<<BankCustomerArg.adharNumber<<endl;
            os<<"PAN Number    :"<<BankCustomerArg.panNumber<<endl;
            os<<"Email Id      : "<<BankCustomerArg.emailId<<endl;
            os<<"Phone Number  :"<<BankCustomerArg.phoneNumber<<endl;
    return os;
}

int main() {

    BankCustomer objBankCustomer("Narendra M", "123456", "ABCD551122", "email@gmail.com", "044-2532156");
    cout<<objBankCustomer;
    return 0;
}
