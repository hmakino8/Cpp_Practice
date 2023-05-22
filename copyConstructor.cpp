#include <iostream>

class NewClass {
  public:
    NewClass();
    NewClass(const NewClass &obj);
};

NewClass::NewClass() {
  std::cout << "this is construct\n";
}

NewClass::NewClass(const NewClass &obj) {
  std::cout << "this is copy construct\n";
}

int main() {
  NewClass a;
  NewClass b = a;
  return 0;
}
