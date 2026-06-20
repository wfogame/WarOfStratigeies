#ifndef MAP_H
#define MAP_H
struct pixelmap {
  unsigned int width;
  unsigned int height;
  unsigned int **pixels;
};
struct pixelmap *createMap(unsigned int width,unsigned int height);
#endif
