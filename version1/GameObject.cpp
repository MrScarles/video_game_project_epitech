#include "GameObject.hpp"



GameObject::GameObject(const char* texturesheet, SDL_Renderer* ren, int x, int y)
{
  renderer = ren;
  objTexture = TextureManager::LoadTexture(texturesheet, ren);
  xpos = x;
  ypos = y;
}

void GameObject::Update()
{
  xpos += 4;
  if (xpos == 736) {
    xpos = 0;
    ypos += 64;
  }
  srcRect.h = 32;
  srcRect.w = 32;
  srcRect.x = 0;
  srcRect.y = 0;

  destRect.x = xpos;
  destRect.y = ypos;
  destRect.w = srcRect.w * 2;
  destRect.h = srcRect.h * 2;
}

void GameObject::Render()
{
  SDL_RenderCopy(renderer, objTexture, NULL, &destRect);
}
