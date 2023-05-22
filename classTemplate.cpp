#include <iostream>

template <class T>
class Square {
  public:
    T width;
    T height;
  Square(T x, T y) {
    width = x;
    height = y;
  }
  T Area() {
    return width * height;
  }
};

int main() {
  Square<int> sx(3, 5);
  Square<double> sy(20.3, 30.9);
  std::cout << sx.Area() << "\n";
  std::cout << sy.Area() << "\n";
  return 0;
}
