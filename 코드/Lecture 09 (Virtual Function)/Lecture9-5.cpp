#include <iostream>
using namespace std;

class Pet
{
    public:
        string name;
        virtual void print() const {cout << name << endl;}
        Pet() {name = "pet";}
        Pet(const Pet& pet){
            cout << "in copy ctor(Pet)" << endl;
            name = pet.name;
        }
};

class Dog : public Pet
{
    public:
        Dog() {breed = "Great Dame";}
        string breed;
        virtual void print() const {cout << breed << endl;}
};

int main()
{
    Pet pet;
    Dog dog;
    pet = dog;
    //Pet pet2 = dog;

    //Following line is illegal
    //breed variable is lost due to a slicing problem: 
    //parent class does not have variable, causing this variable to be lost
    //cout << pet.breed << endl;
    pet.print();
}