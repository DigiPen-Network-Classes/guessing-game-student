#pragma once
#include <string>
#include <utility>
/*
* NOTE: this is provided as an example, you don't have to use this.
*/

void init_game();
// returns a message for the client and if the game is over
std::pair<std::string, bool> process_guess(int guess, int client_id);
int get_winning_client(); // -1 if none yet
bool is_game_over();
void reset_game();

