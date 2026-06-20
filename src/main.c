#include <SDL2/SDL.h>
#include <stdio.h>
int main(int argc, char* argv[]) {
    unsigned int height;
    unsigned int width;
    printf("Enter width then height in this format \n width,height");
    scanf("%u,%u", &width,&height); 
    printf("%p",createMap(width,height));
    return 0;
}
