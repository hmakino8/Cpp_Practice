#include <iostream>

class Human {
  public:
    void show();
};

void Human::show() {
  std::cout << "I'm a perfect human\n";
}

class Mother : public virtual Human {
  public:
    int num1;
};

class Father : public virtual Human {
  public:
    int num2;
};

class Child : public Mother, public Father {
  public:
    int num3;
};

int main() {
  Child obj;
  obj.show();

  return 0;
}
