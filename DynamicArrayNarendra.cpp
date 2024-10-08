// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

class DynamicArray{
    private:
        int count=0;
        int* array;
    
    public:

        DynamicArray(int indexArg){
           array = new int[indexArg];
        }

     
        ~DynamicArray(){
           delete[] this->array; 
        }
    
        void add(int value){
            this->array[this->count] = value;
            this->count++;
        }
    
        
        const int& operator[](int index) const {
              return this->array[index];
        }
     
    
friend std::ostream& operator<<(std::ostream& os, const DynamicArray& numbersArg);
    
};

std::ostream& operator<<(std::ostream& os, const DynamicArray& numbersArg){
            for (int i = 0; i<numbersArg.count; i++)
            {
            os<<numbersArg.array[i]<<", ";
            }
    return os;
}


int main(){
    DynamicArray numbers(5);
    numbers.add(10);
    numbers.add(20);
    numbers.add(30);
    numbers.add(40);
    numbers.add(50);
    cout<<numbers<<endl; // 10,20,30
    int value=numbers[1];
    cout<<value<<endl; //20
   return 0;
  
};


