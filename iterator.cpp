#include <iostream>
#include <vector>

int main() {
  std::vector<int> array;
  for (int i = 0; i < 8; ++i) {
    array.push_back(i);
  }

  std::vector<int>::iterator it = array.begin();
  while(it != array.end()) {
    std::cout << *it << "\n";
    it++;
  }
  return 0;
}
