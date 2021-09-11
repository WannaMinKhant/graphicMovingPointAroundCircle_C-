#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>
#include <time.h>
#include <dos.h>

using namespace std;

float deg2rad(int deg);

int main()
{
    int gd = DETECT, gm, x,y;

     initgraph(&gd, &gm, (char*)"");

    int i, j, midx, midy, r, hr, min, sec,deg, cx, cy;
    int cx1,cx2,cx3,cx4, cy1,cy2,cy3,cy4;

    i = 600, j = 400, r = 400;

    cleardevice();

    while(!kbhit()){
        for(deg=1; deg < 360; deg++)
        {
            cleardevice();


            setcolor(WHITE);

            circle(i,j, 400);
            circle(i,j, 300);
            circle(i,j, 200);
            circle(i,j, 100);
    //        circle(i,j, 50);
//            circle(i,j, 10);
            midx = i + (r * cos(deg2rad(deg)));
            midy = j + (r * sin(deg2rad(deg)));
            setcolor(12);
            setfillstyle(1,12);
            circle(midx, midy ,5);
            floodfill(midx,midy,12);

            //second Direction change Degree
            cx = i + (r * cos(deg2rad(deg - 30)));
            cy = j + (r * sin(deg2rad(deg - 30)));

            cx1 = i + (300 * cos(deg2rad(deg - 30)));
            cy1 = j + (300 * sin(deg2rad(deg - 30)));

            cx2 = i + (200 * cos(deg2rad(deg - 30)));
            cy2 = j + (200 * sin(deg2rad(deg - 30)));

            cx3 = i + (100 * cos(deg2rad(deg - 30)));
            cy3 = j + (100 * sin(deg2rad(deg - 30)));

            cx4 = i + (10 * cos(deg2rad(deg - 30)));
            cy4 = j + (10 * sin(deg2rad(deg - 30)));

            setcolor(10);
            setfillstyle(1,9);
            circle(cx,cy,2);
            floodfill(cx,cy,10);

            setcolor(10);
            setfillstyle(1,9);
            circle(cx1,cy1,2);
            floodfill(cx1,cy1,10);

            setcolor(10);
            setfillstyle(1,9);
            circle(cx2,cy2,2);
            floodfill(cx2,cy2,10);

            setcolor(10);
            setfillstyle(1,9);
            circle(cx3,cy3,2);
            floodfill(cx3,cy3,10);
            setcolor(10);
            setfillstyle(1,9);
            circle(cx4,cy4,2);
            floodfill(cx4,cy4,10);


            setcolor(WHITE);
            setlinestyle(1, 0, 3);
            line(600,800,600,1);

            line(200,400,1000,400);

            line(600,400,883,683);
            line(600,400,883,117);

            line(600,400,317,683);
            line(600,400,317,117);

//            putpixel(350, 100, YELLOW);

            delay(50);

        }
    }

    getch();
    return 0;
}


float deg2rad(int deg)
{

    return ((deg * 3.14)/180);
}
