#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>
#include <string>

#pragma comment(lib, "Ws2_32.lib")

static void run_client(int port)
{
    // TODO: initialize Winsock

    // TODO: create client socket

    // TODO: set socket address and port

    // TODO: connect

    while (true)
    {
        // TODO which side sends first, client or server?
        std::cout << "Your guess: ";
        std::string input;
        std::getline(std::cin, input);
        if (input.empty()) continue;

        // Send, check errors, end of game ...
        bool game_over = true;
        if (game_over)
        {
            break;
        }
    }
    // TODO: shutdown, closesocket, cleanup
}

int main(int argc, char* argv[])
{
    try 
    {
        // get port from argv[1]
        run_client(0);
    }
    catch (const std::exception& e) 
    {
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }
    return 0;
}
