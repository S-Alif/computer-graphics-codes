#include <graphics.h>
#include <conio.h>

int main(){
    initwindow(600, 700);

    setlinestyle(SOLID_LINE, 0, 5);
    line(90, 300, 464, 300);
    line(90, 300, 277, 150);
    line(464, 300, 277, 150);

    // house box
    rectangle(100, 300, 454, 600);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(110, 310, WHITE);

    //door
    rectangle(220, 450, 327, 600);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(260, 530, WHITE);

    //door knob
    setcolor(BLACK);
    circle(300, 525, 10);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(300, 525, BLACK);

    // windows
    setcolor(WHITE);
    circle(160, 360, 40);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(160, 360, WHITE);

    circle(394, 360, 40);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(394, 360, WHITE);

    // field line
    setlinestyle(SOLID_LINE, 0, 5);
    line(0, 550, 100, 550);
    line(454, 550, 600, 550);

    // sun
    circle(450, 100, 50);
    setfillstyle(SOLID_FILL, RED);
    floodfill(450, 100, WHITE);

    // sun flares
    setcolor(YELLOW);
    setlinestyle(SOLID_LINE, 0, 5);
    line(390, 100, 320, 100);
    line(510, 100, 580, 100);

    line(400, 80, 380, 60);
    line(500, 120, 530, 160);

    line(405, 70, 370, 30);
    line(505, 130, 540, 160);



    getch();

    return 0;
}
