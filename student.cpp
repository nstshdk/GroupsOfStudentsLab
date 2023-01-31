#include <iostream>
#include "group.h"
#include <string>
#include <vector>
using namespace std;
Student::Student() {
    std::string name="none";
    std::string surname="none";
    int age=0;
}
Student::Student(std::string aName, std::string aSurname, int aAge, std::vector<int> tGrades) {
    name=aName;
    surname=aSurname;
    age=aAge;
    grades=tGrades;
}
Student::~Student() {
}
string Student::getName() {
    return name;
}
string Student::getSurname() {
    return surname;
}
int Student::getAge() {
    return age;
}
vector<int> Student::getGrades() {
    return grades;
}
float Student::getAverageGrade() {
    float sum=0;
    int gradesLength=sizeof(grades)/sizeof(grades[0]);
    for (int i=0;i<gradesLength;i++) {
        sum+=grades[i];
    }
    float averageGrade = sum/gradesLength;
    return averageGrade;
}