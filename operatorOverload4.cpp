#include <iostream>

class Point {
  public:
    int x;
    int y;
  Point(int a, int b);
  bool operator>(Point obj);
};

Point::Point(int a, int b) {
  x = a;
  y = b;
}

bool Point::operator>(Point obj) {
  return obj.x < x && obj.y < y;
}

int main() {
  Point p(10, 10);
  Point p2(100, 30);

  if (p2 > p) {
    std::cout << "p2 is bigger than p" << "\n";
  } else {
    std::cout << "p2 is smaller than p" << "\n";
  }

  //bool bigger = p2.operator>(p);
  //if (bigger) {
  //  std::cout << "p2 is bigger than p" << "\n";
  //} else {
  //  std::cout << "p2 is smaller than p" << "\n";
  //}
  return 0;
}
