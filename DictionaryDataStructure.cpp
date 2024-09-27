#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>
using namespace std;


template <typename K, typename V>
class Dictionary {
private:
    unordered_map<K, V> data;

public:
    // Add a key-value pair to the dictionary
    void add(const K& key, const V& value) {
        data[key] = value;
    }

    // Get value by key
    V getValue(const K& key) const {
        auto it = data.find(key);
        if (it != data.end()) {
            return it->second; // Return the value if found
        }
        throw out_of_range("Key not found"); // Throw an exception if the key is not found
    }

    // Overload << operator to print the dictionary
    friend std::ostream& operator<<(std::ostream& os, const Dictionary& dict) {
        for (const auto& pair : dict.data) {
            os << pair.first << ": " << pair.second << "\n";
        }
        return os;
    }
};



int main(){
    Dictionary<string,string> mapObj;
    mapObj.add("blr","Bangaluru");
    mapObj.add("chn","Chennai");
    mapObj.add("hyd","Hyderabad");
    cout<<mapObj.getValue("blr")<<endl;
    cout<<mapObj; 
/*
Expected Output
blr => Bangaluru
chn => Chennai
hyd => Hyderabad
*/
    

}
