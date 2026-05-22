#pragma once
#include <string>

#pragma comment(lib, "Ws2_32.lib")

void start_server(int port);


// Thread-safe stdout wrapper. std::cout is shared mutable state: when
// multiple threads write to it concurrently, characters from different
// messages can interleave on the same line. Why does this function need
// to exist at all -- and what would happen if you called std::cout directly
// from handle_client() with several clients connected?
void safe_print(const std::string& msg);
