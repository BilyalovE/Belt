#include <iostream>


using namespace std;


class Animal {
public:
    Animal(const string & n) : Name(n) {
    }
    
p
    const string Name;
};


class Dog : public Animal{
public:
    Dog(const string& n) : Animal(n) {}
    void Bark() const{
        cout << Name << " barks: woof!" << endl;
    }
};

int main(){
    Dog dog("Rex");
    dog.Bark();
    return 0;
}
