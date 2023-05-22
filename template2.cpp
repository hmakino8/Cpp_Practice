#include <iostream>

template <class T1, class T2>
void comp(T1 x, T2 y) {
  if (x > y) {
    std::cout << "integer bigger than float\n";
  } else {
    std::cout << "integer smaller than float\n";
  }
}

int main() {
  int num1;
  float num2;

  std::cout << "input integer\n";
  std::cin >> num1;
  std::cout << "input float\n";
  std::cin >> num2;
  comp(num1, num2);
  return 0;
}
