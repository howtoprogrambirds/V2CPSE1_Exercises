#include "note_player.hpp"

class note_player_self : public note_player {
private:
    hwlib::pin_out & lsp;
public:
    note_player_self(hwlib::pin_out & lsp):
        lsp(lsp)
    {}
    void play (const note & n ) override;
};