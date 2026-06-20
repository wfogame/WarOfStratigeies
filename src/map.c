#include <stdio.h>
#include <stdlib.h>
struct pixelmap *createMap(unsigned int width,unsigned int height){
  struct pixelmap *worldMap = malloc(sizeof(struct pixelmap)); 
  worldMap -> width = width;
  worldMap -> height = height;
  worldMap -> pixels = malloc(sizeof(int*) * width);
  for (unsigned int i = 0; i < width; i++) {
    (*worldMap).pixels[i] = malloc(sizeof(int)*height);
  }
  return worldMap;
}

