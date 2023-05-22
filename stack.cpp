#include <iostream>
#include <stack>

int main() {
  std::stack<int> obj;
  obj.push(10);
  obj.push(20);
  obj.push(30);
  while (!obj.empty()) {
    std::cout << obj.top() << "\n";
    obj.pop();
  }
}
