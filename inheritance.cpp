#include <iostream>

class Info {
  protected:
    int age;
    std::string name;
    std::string subject;
};

class Teacher : public Info {
  public:
    void setInfo(int x, std::string s1, std::string s2);
    void getInfo();
};

void Teacher::setInfo(int x, std::string s1, std::string s2) {
  age = x;
  name = s1;
  subject = s2;
}

void Teacher::getInfo() {
  std::cout << "age = " << age << "\n";
  std::cout << "name = " << name << "\n";
  std::cout << "subject = " << subject << "\n";
}

int main() {
  Teacher t;

  t.setInfo(31, "hmakino", "math");
  t.getInfo();

  return 0;
}
