#include <iostream>
#include <map>

//連想配列
int main() {
  std::map<int, std::string> obj;
  obj.insert(std::make_pair(1, "apple"));
  obj.insert(std::make_pair(2, "banana"));
  obj.insert(std::make_pair(3, "orange"));

  int key;
  std::cout << "input key\n";
  std::cin >> key;
  std::cout << obj[key] << "\n";
  return 0;
}
