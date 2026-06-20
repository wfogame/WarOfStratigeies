#include <stdio.h>
int *createMap(unsigned int width,unsigned int height){
  struct pixelmap *worldMapvariable = malloc(sizeof(struct pixelmap)); 
  worldMapvariable.width = width;
  worldMapvariable.height = height;
  struct pixelmap *worldMap = &worldMapvariable;
  worldMap -> pixels = malloc(sizeof(int*) * width);
  for (unsigned int i = 0; i < width; i++) {
    (*worldMap).pixels[i] = malloc(sizeof(int)*height);
  }
  return &worldMapvariable
}

