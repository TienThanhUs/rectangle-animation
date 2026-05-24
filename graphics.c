#include "raylib.h"
#include <math.h>
#include <stdio.h>


#define WIDTH 800
#define HEIGHT 450
int main(void)
{
    InitWindow(WIDTH, HEIGHT, "My first window");
    double vx = 2;
    double vy = 2; 
    SetTargetFPS(60);
    double x = WIDTH/2;
    double y = HEIGHT/2;
    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(BLACK);
            x += vx;
            y += vy; 
            DrawRectangle(x,y,30,30,BLUE);
            if(x + 30 >= WIDTH|| x <= 0){
                vx = -vx;
            }
            if(y <= 0 || y + 30 >= HEIGHT){
                vy = -vy;
            }
            

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
