#include "game.hpp"

enum Sprite {grass, tree, water, sand};

class Tilemapping {
public:
  Tilemapping(int width_tile, int height_tile, int _nbtilesX, int _nbtilesY, int width, int height, int width_i, int height_i);
  ~Tilemapping();

  std::vector<std::string> GetFile(std::string filename);

  bool do_tiles();
  bool do_fill();
  bool do_map();

  bool Lecture(std::vector<std::string> file);
private:
  int WIDTH_TILE;
  int HEIGHT_TILE;
  int nbtilesX;
  int nbtilesY;
  int width_screen;
  int height_screen;
  int width_image;
  int height_image;
  SDL_Surface* tileset;
  //TileProp* props;
  Sprite schema;
  std::vector<int*> position_tiles;

};

/*class TileProp {
public:
  TileProp();
  ~TileProp();
  int GetHeight();
  void SetHeight(int height);

  int GetWidth();
  void SetWidth();

  int Getplein();
  void Setplein(int _plein);
private:
  SDL_Rect R;
  SDL_Surface* Sprite;
  int plein;
}*/
