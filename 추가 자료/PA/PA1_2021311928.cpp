#include <iostream>
#include <cmath>
using namespace std;
#include <cstdlib>

struct Student{
    char nickname;
    int height;
    int weight;
};
void find_best_bmi_student(Student* array, char* best){
    float d, min = 999;
    for(int i=0; i<10; i++){
        float bmi = 10000*(array[i].weight/pow(array[i].height, 2));
        if(bmi > 21)	d = bmi-21;
        else if(bmi < 21)	d = 21-bmi;
        else	*best = array[i].nickname;
        if(d < min) {
            min = d;
            *best = array[i].nickname;
        }
    }
}
void find_lowest_highest_bmi_student(Student* array, char& low, char& high){
    float low_bmi = 999;
    float high_bmi = -999;
    for(int i=0; i<10; i++){
        float bmi = 10000*(array[i].weight/pow(array[i].height, 2));
        if(bmi < low_bmi) {
            low_bmi = bmi;
            low = array[i].nickname;
        }
        if(bmi > high_bmi) {
            high_bmi = bmi;
            high = array[i].nickname;
        }
    }
}
int main(){
    int seed;
    cout << "Input Seed: ";
    cin >> seed;
    srand(seed);
    Student student_array[10];
    for(int i=0; i<10; i++){
        student_array[i].nickname = 65+i;
        student_array[i].height = 160+(rand()%20);
        student_array[i].weight = 50+(rand()%20);
    }
    char best_bmi_student, lowest_bmi_student, highest_bmi_student;
    find_best_bmi_student(student_array, &best_bmi_student);
    cout << "The best bmi student: " << best_bmi_student <<endl;

    find_lowest_highest_bmi_student(student_array, lowest_bmi_student, highest_bmi_student);
    cout << "The lowest bmi student: " << lowest_bmi_student <<endl;
    cout << "The highest bmi student: " << highest_bmi_student <<endl;
    
    return 0;
}