// Sorting strings using range-based sort()
import std;

int main()
{
  std::vector<std::string> names{"Frodo Baggins", "Gandalf the Gray", 
    "Aragon", "Samwise Gamgee", "Peregrin Took", "Meriadoc Brandybuck", 
    "Gimli", "Legolas Greenleaf", "Boromir"};

  // Sort the names lexicographically
  std::ranges::sort(names);
  std::cout << "Names sorted lexicographically:" << std::endl;
  for (const auto& name : names) std::print("{}, ", name);
  std::print("\n\n");

  // Sort the names by length
  std::ranges::sort(names, [](const auto& left, const auto& right) {return left.length() < right.length(); });
  std::println("Names sorted by length:");
  for (const auto& name : names) std::print("{}, ", name);
  std::print("\n");
}
