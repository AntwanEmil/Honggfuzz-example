#include <string>
#include <cstring>
#include <vector>
// Do some computations with 'str', return the result.
// This function contains a bug. Can you spot it?
size_t DoStuff(const std::string &str) {
  std::vector<int> Vec({0, 1, 2, 3, 4});
  size_t Idx = 0;
  if (str.size() > 5)
    Idx++;
  if (str.find("foo") != std::string::npos)
    Idx++;
  if (str.find("bar") != std::string::npos)
    Idx++;
  if (str.find("ouch") != std::string::npos)
    Idx++;
  if (str.find("omg") != std::string::npos)
    Idx++;
  if (str.find("on") != std::string::npos)
    Idx++;
  // This is the bug fix [Heap buffer overflow / addres out of bounds]
  /*
  if (Idx >= 5)
    {
      printf("Idx too large\n");
      return 0;
    }
*/
  return Vec[Idx];
}