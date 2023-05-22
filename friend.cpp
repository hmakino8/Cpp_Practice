#include <iostream>

class NewClass {
  public:
    void setNum(int x);
    friend void show(NewClass *p);
  private:
    int num;
};

void NewClass::setNum(int x) {
  num = x;
}

void show(NewClass *p) {
  std::cout << (*p).num << "\n";
}

int main() {
  NewClass obj;
  obj.setNum(10);
  show(&obj);
}
