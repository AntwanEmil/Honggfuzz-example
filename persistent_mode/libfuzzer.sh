clang++ -fsanitize=address,undefined,fuzzer -fsanitize-coverage=edge fuzzer.cpp -o fuzzer
./fuzzer