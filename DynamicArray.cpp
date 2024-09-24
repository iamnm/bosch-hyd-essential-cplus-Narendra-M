class DynamicArray{

};

int main(){
    DynamicArray numbers(2);
    numbers.add(10);
    numbers.add(20);
    numbers.add(30);
    cout<<numbers<<endl; // 10,20,30
    int value=numbers[1];
    cout<<value<<endl; //20
   return 0;
  
};
