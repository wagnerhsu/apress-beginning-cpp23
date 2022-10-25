// Accessing characters in a string
// (same as Ex7_02, except that this version uses the more convenient range-based for loop)
import std;

int main()
{
  std::string text;                          // Stores the input
  std::println("Enter a line of text:");
  std::getline(std::cin, text);              // Read a line including spaces

  unsigned vowels {};                        // Count of vowels
  unsigned consonants {};                    // Count of consonants
  for (const char ch : text)
  {
    if (std::isalpha(ch))                    // Check for a letter
	{
      switch (std::tolower(ch))              // Convert to lowercase
      {
        case 'a': case 'e': case 'i': case 'o': case 'u':
          ++vowels;
          break;

        default:
          ++consonants;
          break;
      }
	}
  }

  std::println("Your input contained {} vowels and {} consonants.", vowels, consonants);
}
