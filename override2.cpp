#include <iostream>

class Student {
  public:
    virtual void hello() = 0; //純粋仮想関数
};

class Tanaka : public Student {
  public:
    void hello();
};

void Tanaka::hello() {
  std::cout << "I'm Tanaka\n";
}

int main() {
  Tanaka obj;

  obj.hello();
}
