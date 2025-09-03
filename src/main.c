#include <gb/gb.h>
#include <gb/cgb.h>
#include <stdint.h>
#include "../res/dungeon_map.h"
#include "../res/dungeon_tiles.h"
#include "../res/characters.h"

// TODO:
// - Arrays maken voor de woorden, waar je ze in kan voeren
// - Functie schrijven om die arrays in de bakcground tiles te zetten

void init_gfx(void)
{
    set_default_palette();

    // Load Background tiles and then map
    set_bkg_data(1, characters_TILE_COUNT, characters_tiles);
    unsigned char array[] = {1, 2, 3, 82, 83, 84, 163, 164, 165};

    set_bkg_tiles(5, 5, 3u, 3u, array);

    // Turn the background map on to make it visible
    SHOW_BKG;
}

void main(void)
{
    init_gfx();

    // Loop forever
    while (1)
    {

        // Game main loop processing goes here

        // Done processing, yield CPU and wait for start of next frame
        vsync();
    }
}
