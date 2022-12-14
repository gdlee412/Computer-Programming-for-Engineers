#include <iostream>
#include <string>
using namespace std;


//Base class / parent class / superclass
class Person
{
    public:
        Person() : name("not set") {}
        Person(string name) : name(name) {}
        string getName() const {return name;}
        void setName(string name) {this->name = name;}
        void printInfo() const;
    private:
        string name;
};

void Person::printInfo() const
{
    cout << "Name: " << name << endl;
}

//Derived class / child class / subclass
class Student : public Person
{
    public:
        Student(string name) : Person(name){}
        void setSid(int sid) {this->sid = sid;}
        int getSid() const {return this->sid;}
    private:
        int sid;
};

int main()
{
    Student st1("Jason");
    st1.printInfo();

    return 0;
}