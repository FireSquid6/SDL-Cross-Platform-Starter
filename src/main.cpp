#include <iostream>
#include <SDL2/SDL.h>
#include "module.h"


const int WIDTH = 800, HEIGHT = 600;

using namespace std;
int main(int arc, char *argv[]) {
  module_function();

  SDL_Init(SDL_INIT_EVERYTHING); 

  SDL_Window *window = SDL_CreateWindow("Hello world", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);

  if (window == NULL) {
    cout << "Could not create window: " << SDL_GetError() << endl;
    return 1;
  }

  SDL_Event windowEvent;

  // typically an infinite loop is bad, but in this case we actually want it to run forever
  while (true) {
    if (SDL_PollEvent(&windowEvent)) {
      if (windowEvent.type == SDL_QUIT) {
        cout << "Application Closed" << endl;
        break;
      }
    }
  }

  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}