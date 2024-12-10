#include <graphics.h>
#include <conio.h>

int main(){
    initwindow(700, 700);

    setlinestyle(SOLID_LINE, 0, 5);
    line(60, 300, 227, 150);
    line(394, 300, 227, 150);

    //2nd sloping lines
    line(130, 270, 227, 180);
    line(324, 270, 227, 180);

    setlinestyle(SOLID_LINE, 0, 5);
    line(130, 270, 130, 450);
    line(324, 270, 324, 450);

    //base line
    line(60, 450, 394, 450);

    line(60, 365, 130, 300); // left lower slope
    line(394, 365, 324, 300); // right lower slope

    line(60, 365, 60, 450);
    line(394, 365, 394, 450);

    // door
    setcolor(YELLOW);
    rectangle(197, 360, 247, 450);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(200, 370, YELLOW);


    getch();

    return 0;
}

