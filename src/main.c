#include <SDL2/SDL.h>
#include <stdio.h>
#include "map.h"
#include "TranslateAndRender.h"
int main(int argc, char* argv[]) {
  if(SDL_Init(SDL_INIT_VIDEO)){
    printf("SDL_Init failed to initiliaze properly");
  }
  unsigned int height;
  unsigned int width;
  printf("Enter width then height in this format \n width,height\n");
  scanf("%u,%u", &width,&height); 
  struct pixelmap *mappy = createMap(width,height);
  printf("%p\n",mappy);
  printf("Width: %u,Height: %u",(*mappy).width,(*mappy).height);
  printf("%p",TransformInto1D(mappy));
  SDL_Window *win = SDL_CreateWindow("My Map",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,1920,1080,0);
  SDL_Event userevent;
  SDL_Renderer *winrender = SDL_CreateRenderer(win,-1,0);
  if(winrender == NULL){
    printf("Sdl renderer failed to initiliaze");
    return 1;
  }
  int quit = 0;
  while(!quit){
    while(SDL_PollEvent(&userevent)){
      if(userevent.type==SDL_QUIT){
       quit += 1; 
      }
    }
    SDL_SetRenderDrawColor(winrender,0,0,0,255);
    SDL_RenderClear(winrender);
    // Draw stuff here
    
    //
    SDL_RenderPresent(winrender);
    
  }
  SDL_DestroyWindow(win);
  SDL_Quit();
  return 0;
}
