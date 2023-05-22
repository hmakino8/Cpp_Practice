#include <iostream>

class NewClass {
  public:
    int num;
    int num2;
    NewClass operator+(int x);
    NewClass operator+(NewClass x);
};

NewClass NewClass::operator+(NewClass x) {
  NewClass tmp;
  tmp.num = num + x.num;
  return tmp;
};

NewClass NewClass::operator+(int x) {
  NewClass tmp;
  tmp.num = num + x;
  return tmp;
};

int main() {
  NewClass obj1, obj2, result;

  obj1.num = 10;
  obj2.num = 20;

  result = obj1.operator+(obj2); //30
  result = obj1.operator+(100); //100
  result = obj1 + obj2; //30
  std::cout << result.num << "\n";
}
