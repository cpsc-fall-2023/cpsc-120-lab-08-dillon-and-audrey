// Audrey Thomas
// audrey_thomas101@csu.fullerton.edu
// @audreythomas
// Partners: @audreythomas, @dgarcia05

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if ((arguments.size() - 1) < 1) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  double addup = 0.0;
  bool firstindex = true;

  for (const std::string& value : arguments) {
    if (firstindex) {
      firstindex = false;
      continue;
    }
    addup += std::stod(value);
  }
  int denominator = static_cast<int>(arguments.size()) - 1;
  double result = addup / denominator;
  std::cout << "average = " << result;
  return 0;
}
