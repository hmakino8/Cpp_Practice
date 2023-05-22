#include <iostream>

class Student {
  public:
    Student();
    void putName();
  private:
    std::string name;
};

//コンストラクタ
Student::Student() {
  name = "hmakino";
}

void Student::putName() {
  std::cout << name << "\n";
}

int main() {
  //インスタンス化した時にコンストラクタが発動
  Student s;

  s.putName();
  return 0;
}
