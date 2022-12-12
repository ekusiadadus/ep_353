#include <filesystem>
#include <iostream>
#include <map>
#include <string>

void use_data(const std::map<std::string, std::string> &map) {
  for (const std::pair<std::string, std::string> pair: map) {
    std::cout << pair.first << " " << pair.second << std::endl;
  }
}

const char *load_file(const std::filesystem::path &);

std::string_view do_work(std::string_view sv) {
  std::string results(load_file(sv));
  return results.substr(10, 100);
}

int main() {
  const std::string some_path("/tmp");
  do_work(some_path);
  return 0;
}

std::size_t get_data_size();

void do_more_work(std::string_view sv) {
  int size = get_data_size();
  void *data = malloc(size);
}

struct Base {};
struct Derived : Base {};
void use(const Base);

void do_even_more_work() {
  Derived d;
  use(d);
}

#include <memory>
#include <vector>
void do_things(const std::shared_ptr<const int> &);
std::vector<std::shared_ptr<int>> get_data();

void do_yet_more_work() {
  for (const auto &ptr: get_data()) {
    do_things(ptr);
  }
}