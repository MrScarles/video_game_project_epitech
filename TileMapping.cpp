#include "game.hpp"

Tilemapping::Tilemapping(int width_tile, int height_tile, int _nbtileX, int _nbtilesY, int width, int height, int width_i, int height_i)
{
  WIDTH_TILE = width_tile;
  HEIGHT_TILE = height_tile;
  nbtilesX = _nbtileX;
  nbtilesY = _nbtilesY;
  width_screen = width;
  height_screen = height;
  width_image = width_i;
  height_image = height_i;
}

Tilemapping::~Tilemapping()
{
}

bool Tilemapping::GetFile(std::string filename)
{
  std::ifstream gate;
  gate.open(filename.c_str(), std::ifstream::in);
  std::vector<std::string> file;
  std::string stock = "oui";
  int i = 0;
  std::cout << "before loop\n";
  while (!stock.empty()) {
    std::cout << stock << std::endl;
    std::getline(gate, stock);
    if (stock.c_str() != NULL) {
    file.push_back(stock);
    i++;
   }
  }
  gate.close();
  Lecture(file);
  return (true)
}

bool Tilemapping::do_tiles()
{

}

bool Tilemapping::do_fill()
{

}

bool Tilemapping::do_map()
{

}


bool Tilemapping::Lecture()
{
  int i = 0;
  while ()
}
