#include <iostream>
#include <vector>
#include <string>
#include "group.h"
using namespace std;
int main()
{
    Student nastiaH1("Anastasia1","Hodiak1",17,{1,2,5,2,5});
    Student nastiaH2("Anastasia2","Hodiak2",18,{2,1,5,4,4});
    Student nastiaH3("Anastasia3","Hodiak3",19,{3,2,5,1,3});
    Student nastiaH4("Anastasia4","Hodiak4",20,{2,5,5,4,1});
    std::vector<Student> allStudent={nastiaH1,nastiaH2,nastiaH3,nastiaH4};
    Group IR11 (allStudent);
    IR11.getGroupRating();
    return 0;
}
