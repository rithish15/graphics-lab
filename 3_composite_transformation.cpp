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

int main()
{
  int gd,gm,x,y,sx,sy,sz,ang,x1,x2,y1,y2;
  printf("Enter the Translation vector x : ");
  scanf("%d",&x);
  printf("Enter the Translation vector y : ");
  scanf("%d",&y);
  printf("\n Enter the Scaling Factor sx : ");
  scanf("%d",&sx);
  printf("\n Enter the Scaling Factor sy : ");
  scanf("%d",&sy);
  printf("\n Enter the Scaling Factor sz : ");
  scanf("%d",&sz);
  printf("\n Enter the Rotation angle : ");
  scanf("%d",&ang);
  detectgraph(&gd,&gm);
  initgraph(&gd,&gm,NULL);
  maxx=getmaxx();
  maxy=getmaxy();
  midx=maxx/2;
  midy=maxy/2;
  outtextxy(100,100,"ORIGINAL OBJECT");
  line(midx,0,midx,maxy);
  line(0,midy,maxx,midy);
  bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
  axis();
  outtextxy(100,20,"TRANSLATION");
  bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
  bar3d(midx+(x+100),midy-(y+20),midx+(x+60),midy-(y+90),20,5);
  axis();
  outtextxy(100,20,"SCALING");
  bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
  bar3d(midx+(sx*100),midy-(sy*20),midx+(sx*60),midy-(sy*90),20*sz,5);
  axis();
  outtextxy(100,20,"ROTATION");
  x1=100*cos(ang*3.14/180)-20*sin(ang*3.14/180);
  y1=100*sin(ang*3.14/180)+20*sin(ang*3.14/180);
  x2=60*cos(ang*3.14/180)-90*sin(ang*3.14/180);
  y2=60*sin(ang*3.14/180)+90*sin(ang*3.14/180);
  axis();
  outtextxy(100,40,"After rotating about z-axis");
  bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
  bar3d(midx+x1,midy-y1,midx+x2,midy-y2,20,5);
  axis();
  outtextxy(100,40,"After rotating about x-axis");
  bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
  bar3d(midx+100,midy-x1,midx+60,midy-x2,20,5);
  axis();
  outtextxy(100,40,"After rotating about y-axis");
  bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
  bar3d(midx+x1,midy-20,midx+x2,midy-90,20,5);
  axis();
  wait_for_char();
  closegraph();
}
