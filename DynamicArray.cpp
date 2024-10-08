// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

class DynamicArray{
    private:
    int index, count;
    int* array = new int[0];
    
    public:
    
    void add(int value){
        count++;
        if(index<=count)
        {
           int* array = new int[index]; 
        }
        this->array[index] = value;
    }
    
    DynamicArray(int indexArg)
    {
       this->index= indexArg;
       int* array = new int[indexArg];
       
    }
    
     
friend std::ostream& operator<<(std::ostream& os, const DynamicArray& numbersArg);
    
};

std::ostream& operator<<(std::ostream& os, const DynamicArray& numbersArg){
            for (int i = 0; i<numbersArg.index; i++)
            {
            os<<numbersArg.array[numbersArg.index]<<", ";
            }
    return os;
}


int main(){
    DynamicArray numbers(2);
    numbers.add(10);
    numbers.add(20);
    numbers.add(30);
    cout<<numbers<<endl; // 10,20,30
    //int value=numbers[1];
    //cout<<value<<endl; //20
   return 0;
  
};


