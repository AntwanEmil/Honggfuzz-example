hfuzz-g++ -fsanitize=address,undefined fuzzer.cpp -o fuzzer
honggfuzz -i corpus --crashdir crashes -P -- ./fuzzer