#include <iostream>

class OldClass {
  public:
    OldClass() {
      std::cout << "oldclass's constructor: has no arg\n";
    };
    OldClass(int x) {
      std::cout << "oldclass's constructor: num is " << x << "\n";
    };
};

class NewClass : public OldClass {
  public:
    NewClass() : OldClass() {
      std::cout << "newclass's constructor: has no arg\n";
    };
    NewClass(int x) : OldClass(1) {
      std::cout << "newclass's constructor: num is " << x << "\n";
    };
};

int main() {
  NewClass a(2);
  NewClass b;
  NewClass c = b;
  return 0;
}
