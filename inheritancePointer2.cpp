#include <iostream>

//抽象クラス・・・純粋仮想関数をメンバに持つクラス
class Animal {
  public:
    virtual void speak() = 0; //純粋仮想関数
};

class Dog : public Animal {
  public:
    void speak() {
      std::cout << "WanWan\n";
    }
};

class Cat : public Animal {
  public:
    void speak() {
      std::cout << "NyaNya\n";
    }
};

int main() {
  Animal *p[2];

  Dog objD;
  Cat objC;

  p[0] = &objD;
  p[1] = &objC;

  for (int i = 0; i < 2; i++) {
    (*p[i]).speak();
  }
  return 0;
}
