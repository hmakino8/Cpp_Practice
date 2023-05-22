#include <iostream>

class Mother {
  public:
    std::string MotherName;
};

class Father {
  public:
    std::string FatherName;
};

class Child : public Mother, public Father {
  public:
    std::string name;
};

int main() {
  Child hmakino;

  hmakino.MotherName = "a";
  hmakino.FatherName = "b";
  hmakino.name = "c";

  std::cout << hmakino.FatherName << "\n";
}
