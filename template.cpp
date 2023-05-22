#include <iostream>

template <class T>
T power(T x) {
  return x * x;
}

int main() {
  std::cout << power(10.8) << "\n";
  return 0;
}
