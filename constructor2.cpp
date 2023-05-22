#include <iostream>

class Student {
  public:
    Student(int x, std::string s);
    void putStudentInfo(Student *s);
  private:
    int age;
    std::string name;
};

void Student::putStudentInfo(Student *s) {
  std::cout << "age = " << s->age << "\n";
  std::cout << "name = " << s->name << "\n";
}

Student::Student(int x, std::string s) {
  age = x;
  name = s;
}

int main() {
  Student hmakino(31, "hmakino");
  hmakino.putStudentInfo(&hmakino);
  return 0;
}
