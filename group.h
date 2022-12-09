#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Student {
    private:
      std::string name;
      std::string surname;
      int age;
      std::vector<int> grades;
      float AverageGrade;
    public:
      Student();
      Student(std::string aName, std::string aSurname, int aAge, std::vector<int> grades);
      ~Student();
      
      std::string getName();
      std::string getSurname();
      int getAge();
      std::vector<int> getGrades();
      float getAverageGrade();
};

class Group{
  private:
    std::vector<Student> allStudent;
  public:
    Group();
    Group(std::vector<Student> allStudent);
    void addStudent (Student newStudent);
    void removeStudent(Student oldStudent);
    void getGroupRating();
    ~Group();
};

