#include "hello-world.h"
#include <fstream>

std::string hello_world() {
  std::ifstream greet_file("src/data/greet.txt");
  if (!greet_file.is_open()) {
    return R"(load data/greet.txt failed.)";
  }

  const std::string greet =
      std::string(std::istreambuf_iterator<char>(greet_file),
                  std::istreambuf_iterator<char>());
  greet_file.close();
  return greet;
}
