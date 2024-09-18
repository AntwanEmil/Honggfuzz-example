#include "api.cpp"

#include <string>
#include <stdlib.h>
#include <cstdint>
// Simple fuzz target for DoStuff().
// See http://libfuzzer.info for details.
extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size, int m) {
  if (size < 2) {
    return 0;
  }
  if (data[1] != 'b') {
    return 0;
  }
  std::string str(reinterpret_cast<const char *>(data), size);
  DoStuff(str);  // Disregard the output.

  return 0;
}