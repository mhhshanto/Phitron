#include <bits/stdc++.h>
using namespace std;
class Student {
  public:
   string name;
   int stu_id;
   float mark;
   int age;
   string fathers_name;
   void print_information(){
    cout<<name<<" "<<stu_id<<" "<<mark<<" "<<age<<" "<<fathers_name;
   }
};
int main(){
Student s;
s.name = "shanto";
s.stu_id = 20105156;
s.mark = 2.92;
s.age = 23;
s.fathers_name = "delwar hossain";
s.print_information();
return 0;
}