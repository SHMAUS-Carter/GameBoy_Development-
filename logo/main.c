#include <gb/gb.h>

#include "tiles.c"
#include "map.map"
const int logo_tile_map_size = 0x0168;
const int logo_tile_map_width = 0x14;
const int logo_tile_map_height = 0x12;

const int logo_tile_data_size = 0x05B0;
const int logo_tile_count = 0x0168;

void main()
{
     // Load up the tile data
     set_bkg_data(0,255,logo_tile_data);

     // Switch to VRAM
     VBK_REG = 1;

     // Switch out of VRAM
     VBK_REG = 0;

     // Set screen x,y pos to 0,0 and draw the map 20,18(size of the screen)
     set_bkg_tiles(0,0,20,18,logo_map_data);

     // Show the background
     SHOW_BKG;

     // Turn the display on
     DISPLAY_ON; 
}