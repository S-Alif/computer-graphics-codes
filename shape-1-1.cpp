#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set line thickness
    setlinestyle(SOLID_LINE, 0, 4);
    rectangle(50, 200, 450, 450);

    //lines inside rectangle
    line(100, 200, 100, 450);
    line(200, 200, 200, 450);
    line(230, 200, 230, 450);
    line(260, 200, 260, 450);
    line(300, 200, 300, 450);
    line(400, 200, 400, 450);

    //horizontal lines
    line(50, 230, 100, 230);
    line(400, 230, 450, 230);

    line(200, 230, 230, 230);
    line(260, 230, 300, 230);

    //upper rectangle
    rectangle(80, 150, 430, 200);

    //left slope
    line(100, 150, 250, 100);
    line(250, 100, 400, 150);

    //flag pole
    line(250, 40, 250, 100);

    //flag
    rectangle(250, 5, 330, 40);
    rectangle(270, 15, 310, 30);


    getch();
    closegraph();

    return 0;
}
