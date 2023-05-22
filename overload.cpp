#include <iostream>

class Student {
  public:
    Student();
    Student(int x, std::string s);
    void putStudentInfo(Student *s);
  private:
    int age;
    std::string name;
};

Student::Student() {
  age = 0;
  name = "";
}

Student::Student(int x, std::string s) {
  age = x;
  name = s;
}

void Student::putStudentInfo(Student *s) {
  if (s->name == "") {
    std::cout << "noname" << "\n";
  } else {
    std::cout << "age = " << s->age << "\n"; std::cout << "name = " << s->name << "\n";
  }
}

int main() {
  Student hmakino(31, "hiro");
  Student noname;

  hmakino.putStudentInfo(&hmakino);
  std::cout << "\n";
  noname.putStudentInfo(&noname);

  return 0;
}
