#include <stdio.h>
#include "TranslateAndRender.h"
#include <stdlib.h>
#include "map.h"
int *TransformInto1D(struct pixelmap *MAP2D){
  //Convert into format, so that the returned array is thee size of sizeof(int) * width * height
  int width = (*MAP2D).width;
  int height = (*MAP2D).height;
  int *Array = malloc(sizeof(int)*width*height);
  for (int i = 0;i < width; i++) {
    for (int z = 0; z < height; z++){
      Array[i*height+z] = (*MAP2D).pixels[i][z];
    }
  }
  return Array;
}
