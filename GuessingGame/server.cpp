#include <iostream>
#include <chrono>
#include <mutex>
#include <string>
#include <vector>
#include <atomic>
#include <thread>
#include <set>
#include <winsock2.h>
#include "server.h"
#include "game.h"

void start_server(int listen_port) 
{
    // TODO: initialize winsock

    // TODO: initialize the game

    // TODO: create the listen socket

    // TODO: set address and port 

    // TODO: bind the socket

    // TODO: begin listening for connections
    std::cout << "Server listening on port " << listen_port << std::endl;
    
    while (true) 
    {
        // TODO accept incoming clients,
        // TODO handle clients (select or threads)
        if (is_game_over()) 
        {
            std::cout << "Game Over. Resetting game ..." << std::endl;
            reset_game();
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // TODO: close sockets, cleanup
}
int main(int argc, char** argv) 
{
    try
    {
        // TODO: get port from argv 
        //start_server(0);
    }
    catch (const std::exception& e) 
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}

