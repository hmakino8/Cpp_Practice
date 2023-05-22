#include <iostream>
#include <queue>

int main() {
  std::queue<int> obj;
  obj.push(10);
  obj.push(12);
  obj.push(38);
  while (!obj.empty()) {
    std::cout << obj.front() << "\n";
    obj.pop();
  }
}
