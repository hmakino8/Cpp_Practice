#include <iostream>

class Point {
  public:
    int x;
    int y;
    Point(int a, int b) {
      x = a;
      y = b;
    }
    Point operator+(Point obj) {
      Point tmp(0, 0);

      tmp.x = x + obj.x;
      tmp.y = y + obj.y;
      return tmp;
    }
};

int main() {
  Point ans(0, 0);
  Point a(2, 3);
  Point b(10, 8);
  Point c(20, -3);

  ans = a + b + c;
  std::cout << "X axis = " << ans.x << "\n";
  std::cout << "Y axis = " << ans.y << "\n";
  return 0;
}
