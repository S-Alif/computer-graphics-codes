#include <graphics.h>
#include <conio.h>

int main(){
    initwindow(700, 700);

    //lower base
    rectangle(100, 300, 600, 500);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(210, 310, WHITE);

    //door
    rectangle(130, 370, 200, 500);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(170, 450, WHITE);

    //window
    rectangle(230, 330, 300, 400);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(240, 340, WHITE);

    // separator
    rectangle(345, 300, 355, 500);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(346, 301, WHITE);

    // garage door
    rectangle(380, 370, 570, 500);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(381, 371, WHITE);

    // house roof triangle
    line(90, 300, 364, 300);
    line(90, 300, 227, 150);
    line(364, 300, 227, 150);
    //setfillstyle(SOLID_FILL, MAGENTA);
    //floodfill(91, 228, WHITE);


    // circle inside triangle
    circle(227, 234, 40);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(227, 234, WHITE);

    // rectangle house roof
    rectangle(227, 180, 610, 300);
    setfillstyle(SOLID_FILL, CYAN);
    floodfill(228, 190, WHITE);

    //chimney
    rectangle(120, 180, 160, 300);
    setfillstyle(SOLID_FILL, RED);
    floodfill(121, 190, WHITE);

    rectangle(110, 160, 170, 180);
    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(111, 170, WHITE);


    getch();

    return 0;
}
