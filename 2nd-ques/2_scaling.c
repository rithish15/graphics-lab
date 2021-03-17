
#include<stdio.h>
#include<graphics.h>
#include<math.h>
int maxx,maxy,midx,midy;
void axis()
{
	getch();
	cleardevice();
	line(midx,0,midx,maxy);
	line(0,midy,maxx,midy);
}

void wait_for_char()
{

    //Wait for a key press
    int in = 0;

    while (in == 0) {
        in = getchar();
    }
}

void main()
{
	int x,y,z,o,x1,x2,y1,y2;
	printf("Enter scaling factor x : ");
	scanf("%d",&x); 
	printf("Enter scaling factor y : ");
	scanf("%d",&y);
	printf("Enter scaling factor z : ");
	scanf("%d",&z);
	int gd=DETECT,gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,NULL);
	//setfillstyle(0,getmaxcolor());
	maxx=getmaxx();
	maxy=getmaxy();
	midx=maxx/2;
	midy=maxy/2;
	
	axis();
	printf("Before Scaling");
	bar3d(midx+50,midy-100,midx+60,midy-90,5,1);
	axis();
	printf("After scaling");
	bar3d(midx+(x*50),midy-(y*100),midx+(x*60),midy-(y*90),5*z,1);
	//axis();
	wait_for_char();
	closegraph();
}


