// Parametric Polymorphism
#include <iostream>
#include <string>

using namespace std;

template<typename OperandType >
OperandType add(OperandType Operand1, OperandType Operand2)
{
    OperandType result= Operand1 + Operand2;
    return result;
}

int main(){
    
   int result = add<int>(10,2);
   cout<<result<<endl;
   float fResult = add<float>(10.3f,40.f);
   cout<<fResult<<endl;

   return 0;
  
};


