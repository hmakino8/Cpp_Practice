#include <iostream>

int judge(int x) throw(std::string) {
  if (x < 0 || x > 150) {
    throw std::string("error\n");
  } else if (x < 20) {
    return 1000;
  } else {
    return 2000;
  }
}

int main() {
  try {
    int age;
    std::cout << "input age\n";
    std::cin >> age;
    int result = judge(age);
    std::cout << result << "\n";
  }
  catch(std::string ex) {
    std::cout << ex;
  }
}
