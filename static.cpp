#include <iostream>

class Student {
  public:
    static int grade;
};

int Student::grade = 5;

int main() {
  Student a;
  Student b;
  Student c;

  std::cout << "a.grade = " << a.grade << "\n";
  b.grade = 8;
  std::cout << "c.grade = " << c.grade << "\n";

  return 0;
}
