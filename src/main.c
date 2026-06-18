#include <SDL2/SDL.h>
#include <stdio.h>
int main(int argc, char* argv[]) {
    // 1. Initialize SDL
    SDL_Init(SDL_INIT_VIDEO);

    // 2. Create window
    SDL_Window* window = SDL_CreateWindow(
        "My Window",        // title
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, // position
        1920, 1080,           // width, height
        0                   // flags
    );

    // 3. Create renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

    // 4. Main loop
    int running = 1;
    SDL_Event event;
    while (running) {
        // Handle quit
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) running = 0;
        }

        // Clear screen (black)
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        // YOUR DRAWING HERE

        // Show what you drew
        SDL_RenderPresent(renderer);
    }

    // 5. Cleanup
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
