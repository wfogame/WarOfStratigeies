#include <SDL2/SDL.h>
#include <stdio.h>
#include "map.h"
int main(int argc, char* argv[]) {
    unsigned int height;
    unsigned int width;
    printf("Enter width then height in this format \n width,height\n");
    scanf("%u,%u", &width,&height); 
    struct pixelmap *mappy = createMap(width,height);
    printf("%p\n",mappy);
    printf("Width: %u,Height: %u",(*mappy).width,(*mappy).height);
    return 0;
}
