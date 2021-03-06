#ifndef TEXTUREMANAGER_HPP
#define TEXTUREMANAGER_HPP
#include "Game.hpp"

class TextureManager {

public:

	static SDL_Texture* LoadTexture(const char* textureSheet);
	static void Draw(SDL_Texture* tex, SDL_Rect src, SDL_Rect dest);
};

#endif /* TEXTUREMANAGER_HPP */