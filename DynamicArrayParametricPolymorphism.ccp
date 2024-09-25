#include<iostream>
using namespace std;

template<typename ItemType>
class DynamicArray {
    private:
    int size; // Variable to store the size of the array
    ItemType* arr; // Pointer to dynamically allocated array
    int index; // Variable to keep track of the current index

    public:
    // Parameterized constructor
    DynamicArray(int sizeArg): size{sizeArg}, index{0} {
        this->arr = new ItemType[size]; // Allocate memory for the array
    }

    // Method to add an integer value to the array
    void add(ItemType item) {
        if(this->index < this->size) {
            this->arr[this->index] = item; // Add value to the array
            this->index++; // Increment the index
        } else {
            // If the array is full, create a new array with increased size
            size += 1;
            ItemType *newArr = new ItemType[size]; // Allocate memory for the new array
            for(int i = 0; i < size - 1; i++) {
                newArr[i] = arr[i]; // Copy elements to the new array
            }
            newArr[size - 1] = item; // Add the new value to the new array
            this->index++; // Increment the index
            delete[] arr; // Free the old array memory
            arr = newArr; // Point to the new array
        }
    }

    // Destructor to free the dynamically allocated memory
    ~DynamicArray() {
        cout << "Destructor called" << endl;
        delete[] arr; // Free the dynamically allocated memory
    }

    // Overload the subscript operator to access array elements
    ItemType operator[](int indexArg) {
        return this->arr[indexArg]; // Return the element at the given index
    }
    
    friend std::ostream& operator<<(std::ostream& os, const DynamicArray<ItemType>& operand2){
    for(int i = 0; i < operand2.size; i++) {
        os << operand2.arr[i] << " "; // Print each element
    }
    return os;
    }
    
};

// Main function
int main() {
    DynamicArray<int> numbers(2); // Create a DynamicArray object with size 2
    numbers.add(10); // Add 10 to the array
    numbers.add(20); // Add 20 to the array
    numbers.add(30); // Add 30 to the array
    cout<<numbers<<endl;

    DynamicArray<float> floatNumbers(1); 
    floatNumbers.add(10.10f); 
    floatNumbers.add(20.30f); 
    floatNumbers.add(30.50f); 
    cout<<floatNumbers<<endl;

    return 0; // Return 0 to indicate successful execution
}
