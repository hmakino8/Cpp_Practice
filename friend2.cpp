#include <iostream>

class OldClass;

class NewClass {
  public:
    int num;
    NewClass(int x) {
      num = x;
    }
    friend void calculate(NewClass *p1, OldClass *p2);
};

class OldClass {
  public:
    int num;
    OldClass(int y) {
      num = y;
    }
    friend void calculate(NewClass *p1, OldClass *p2);
};

void calculate(NewClass *p1, OldClass *p2) {
  std::cout << (*p1).num + (*p2).num << "\n";
}

int main() {
  NewClass obj1(10);
  OldClass obj2(20);

  calculate(&obj1, &obj2);
}
