#include <string>
#include <vector>
#include "group.h"
using namespace std;
Group::Group() {}
Group::Group(std::vector<Student> allStudent) {
    this->allStudent=allStudent;
}
Group::~Group() {
}
void Group::addStudent(Student studentObj) {
  allStudent.push_back(studentObj);
}
void Group::removeStudent(Student studentObj) {
  allStudent.pop_back();
}
void Group::getGroupRating() {
    int i, j;
        for (i=0; i<allStudent.size()-1; i++) {
        for (j=0; j<allStudent.size()-i-1; j++) {
            if (allStudent[j].getAverageGrade()>allStudent[j + 1].getAverageGrade()) {
                swap(allStudent[j], allStudent[j + 1]);
}
}
}
 for (int k=0; k<allStudent.size(); k++) {
    cout<<"Name:"<<allStudent[k].getName()<<", Surname:"<<allStudent[k].getSurname()<<", Age:"<<allStudent[k].getAge()<<", AverageGrade:"<<allStudent[k].getAverageGrade()<<"\n";
}
}