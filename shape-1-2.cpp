#include <graphics.h>
#include <conio.h>

int main() {
    initwindow(700, 700);

    // upper triangle
    line(80, 150, 285, 50);
    line(490, 150, 285, 50);
    line(80, 150, 490, 150);
    //setfillstyle(SOLID_FILL, WHITE);
    //floodfill(81, 160, WHITE);

    // upper triangle lower part
    rectangle(80, 150, 490, 170);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(90, 160, WHITE);

    //second rectangle
    rectangle(100, 200, 470, 220);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(150, 210, WHITE);

    // columns
    rectangle(130, 250, 200, 450);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(140, 300, WHITE);

    rectangle(250, 250, 320, 450);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(270, 300, WHITE);

    rectangle(370, 250, 440, 450);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(390, 300, WHITE);


    //  base 1
    rectangle(100, 480, 470, 500);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(110, 490, WHITE);

    //  base 2
    rectangle(80, 530, 490, 550);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(110, 540, WHITE);



    getch();
    closegraph();

    return 0;
}

