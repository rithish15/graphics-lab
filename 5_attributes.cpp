#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int draw_line()
{
   
    int x1,y1,x2,y2,ls,lt,lc;
   
    printf("Enter coordinates for 1st point of line x1 : ");
    scanf("%d",&x1);
   
    printf("Enter coordinates for 1st point of line y1 : ");
    scanf("%d",&y1);
   
    printf("Enter coordinates for 2nd point of line x2 :");
    scanf("%d",&x2);
   
    printf("Enter coordinates for 2nd point of line y2 :");
    scanf("%d",&y2);
   
    printf("Enter a number for linestyle:\n");
    scanf("%d",&ls);
   
    printf("Enter for 1/2/3 for thickness:\n");
    scanf("%d",&lt);
   
    printf("Enter a number for color:\n");
    scanf("%d",&lc);
   
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    cleardevice();
    setcolor(lc);
    setlinestyle(ls,1,lt);
    line(x1,y1,x2,y2);
    getch();
    closegraph();
    return 0;
}

int draw_circle()
{
	int x,y,c,cc,cf;
	printf("Enter radius of circle :");
	scanf("%d",&c);
	printf("Enter center coordinates x :");
	scanf("%d",&x);
	printf("Enter center coordinates y :");
	scanf("%d",&y);
	printf("Enter a number for color :");
	scanf("%d",&cc);
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	setcolor(cc);
	circle(x,y,c);
	floodfill(x,y,cc);
	getch(); 
	closegraph();
	return 0;
}

int draw_ellipse()
{
    int x,y,xc,yc,ec;
    printf("Enter x radius:");
    scanf("%d",&xc);
    printf("Enter y radius:");
    scanf("%d",&yc);
    printf("Enter center coords:");
    scanf("%d%d",&x,&y);
    printf("Enter a number for color:");
    scanf("%d",&ec);
	int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    setcolor(ec);
    ellipse(x,y,0,360,xc,yc);
    fillellipse(x,y,xc,yc);
    getch();
    closegraph();	
	return 0;
}

int main()
{
	int choice;
	printf("\n1.Line \n2.Circle \n3.Ellipse\n");
	printf("Enter the Choice : ");
	scanf("%d",&choice);
	switch(choice) {
 		case 1:
			draw_line();
    		break;
		case 2:
			draw_circle();
		break;
		case 3:
			draw_ellipse();
		break;
	}
	return 0; 
}
