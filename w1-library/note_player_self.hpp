#include "note_player.hpp"

class note_player_self : public note_player {
public:
    note_player_self(){}
    void play (const note & n ) override;
};