#include <iostream>

int main() {
  try {
    int num;
    std::cout << "input num\n";
    std::cout << "1: integer, 2: float, 3: string\n";
    std::cin >> num;
    if (num == 1) {
      throw 8;
    } else if (num == 2) {
      throw 8.8;
    } else {
      throw std::string("8");
    }
  }
  catch(int x) {
    std::cout << x << "(integer)\n";
  }
  catch(float x) {
    std::cout << x << "(float)\n";
  }
  catch(std::string x) {
    std::cout << x << "(string)\n";
  }
  //どんな型でもok
  //catch(...) {
  //  std::cout << "bye....\n" << "\n";
  //}
  return 0;
}
