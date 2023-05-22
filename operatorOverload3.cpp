#include <iostream>

class NewClass {
  public:
    int num;
    NewClass();
    NewClass operator++();
};

NewClass::NewClass() {
  num = 0;
}

NewClass NewClass::operator++() {
  NewClass tmp;
  ++num;
  tmp.num = num;
  return tmp;
}

int main() {
  NewClass obj, ans;
  ++obj;
  ans = obj.operator++();
  std::cout << ans.num << "\n";
  return 0;
}
