#include <iostream>
#include "note_player_self.hpp"

void note_player_self::play(const note & n){
    std::cout << "Frequency: " << n.frequency << " Duration: " << n.duration << "\n";
}