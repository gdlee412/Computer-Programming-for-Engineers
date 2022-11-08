#include <iostream>
using namespace std;

class Pet
{
    public:
        string name;
        virtual void print() const {cout << "Pet Class: " << name << endl;}
        Pet() {name = "pet";}
};

class Dog : public Pet
{
    public:
        Dog() {breed = "Great Dame";}
        string breed;
        virtual void print() const {cout << "Dog Class: " << breed << endl;}
};

int main()
{
    //Fixes slicing problem
    //but still cannot access the breed variable individually, only by virtual functions
    Pet* pet;
    Dog* dog;
    dog = new Dog;
    dog->name = "Tiny";
    dog->breed = "Great Dane";
    pet = dog;

    //Cannot access breed field of object pointer to by pet
    //cout << pet->breed << endl; ILLEGAL
    pet->print();
}

