#include "hwlib.hpp"
#include "note_player_self.hpp"

void note_player_self::play(const note & n){
    hwlib::cout << "Frequency: " << n.frequency << " Duration: " << n.duration << "\n";
}