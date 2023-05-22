#include <iostream>

/*
  派生クラスへの基本クラスのポインタを使う際、
  派生クラスから、基本クラスのメンバのみ参照することができる。

  (*s[0]).num => ok
  (*s[0]).num2 => ng
*/

class Student {
  public:
    int num;
};

class Tanaka : public Student {
  public:
  int num2;
    Tanaka(int x) {
      num = x;
    }
};

class Hanako : public Student {
  public:
    Hanako(int x) {
      num = x;
    }
};

int main() {
  Student *s[2];
  Tanaka objT(0);
  Hanako objH(1);

  s[0] = &objT;
  s[1] = &objH;

  std::cout << objT.num << "\n";
  std::cout << objH.num << "\n";
}
