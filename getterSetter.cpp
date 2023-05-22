#include <iostream>

class Student {
  public:
    void setNum(int x);
    int getNum();
  private:
    int age;
};

void Student::setNum(int x) {
  age = x;
}

int Student::getNum() {
  return age;
}

int main() {
  Student hmakino;

  hmakino.setNum(31);
  std::cout << hmakino.getNum() << "\n";

  return 0;
}
