
#ifndef Game_hpp
#define Game_hpp
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <iostream>

class Game {
public:
  Game();
  ~Game();

  void init(const char* title, int xpos, int ypos, int width, int heignt, bool fullscreen);

  void handleEvents();
  void update();
  void render();
  void clean();

  bool running() {return isRunning;};
private:
  bool isRunning = false;
  int cpt = 0;
  SDL_Window *window;
  SDL_Renderer *renderer;
  SDL_Texture *playerTex;

};

#endif /* Game_hpp */
