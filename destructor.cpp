#include <iostream>

/*
  クラスの宣言と同時に初期化した場合は、コンストラクタは発動しない。
  ポインタ変数をメンバに持つクラスなど、コンストラクタの発動によって他クラスの
  メンバの値に影響を及ぼすことを防ぐため。

  初期化時に意図的にコンストラクタを発動させたい場合にコピーコンストラクタがある。
*/

class NewClass {
  public:
    NewClass();
    ~NewClass();
  private:
    int num;
};

NewClass::NewClass() {
  std::cout << "hello!\n";
}

NewClass::~NewClass() {
  std::cout << "bye!\n";
}

int main() {
  NewClass a;
  NewClass b = a;
  return 0;
}
