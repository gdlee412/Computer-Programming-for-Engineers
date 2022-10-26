#include <iostream>
#include <cstring>
using namespace std;

class CPE
{
    private:
        int studentNo;
        char *instructor;
    public:
    
        CPE(int no, const char *name)
        {
            cout << "In Normal Constructor" << endl;
            studentNo = no;
            int size = strlen(name);
            instructor = new char[size + 1];
            strcpy(instructor, name);
        }

        //Copy constructor
        //there also is a default copy constructor which uses "shallow copy" -> pointer addresses are only copied
        //write your own copy constructor for "deep copy" -> save values into another memory location
        //deep copy is useful when class consists of pointers
        
        //example of shallow copy
    
        CPE(const CPE &p1)
        {
            cout << "In Copy Constructor" << endl;
            studentNo = p1.studentNo;
            instructor = p1.instructor;
        }

        //example of deep copy
        /*
        CPE(const CPE &p1)
        {
            cout << "In Deep Copy Constructor" << endl;
            studentNo = p1.studentNo;

            instructor = new char[strlen(p1.instructor) + 1];
            strcpy(instructor, p1.instructor);
        }
        */

        int getStudentNo(){ return studentNo; }
        void getInsName(){ cout << instructor << endl; }
        void changeIns(const char *name) { strcpy(instructor, name); }
};

int main()
{
    //Normal Constructor
    CPE obj1(52, "HHH");

    //Copy constructor
    CPE obj2 = obj1;

    obj1.getInsName();
    obj2.getInsName();

    obj1.changeIns("AAA");

    //notice the difference when using deep copy and shallow copy
    obj1.getInsName();
    obj2.getInsName();
    
    return 0;
}