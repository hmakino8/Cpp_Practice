#include <iostream>

class Student {
  public:
    virtual void hello() {
      std::cout << "this is student\n";
    }
};

class Teacher : public Student {
  public:
    void hello() {
      std::cout << "this is Teacher\n";
      std::cout << "override success!\n";
    }
};

int main() {
  Teacher obj;

  obj.Student::hello();
  obj.hello();

  return 0;
}
