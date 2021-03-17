#include<stdio.h>
#include<graphics.h>
#include<math.h>

void trans();


//these are left,top,right,bottom parameters for bar3d function
int maxx,maxy,midx,midy;

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

            int ch;
	    int x,y;
            printf("Enter translation factor x : ");
            scanf("%d",&x);
            printf("Enter translation factor y : ");
	    scanf("%d",&y);
            
	    int gd=DETECT,gm;
            detectgraph(&gd,&gm);
            initgraph(&gd,&gm," ");
           
            trans(x,y);
	    wait_for_char();	
	    closegraph();
return 0;
}

//function for translation of a 3d object
void trans(int x,int y)

{

            int z,o,x1,x2,y1,y2;

            midx=200;

            midy=200;

	    printf("Before translation");
            bar3d(midx+50,midy-100,midx+100,midy-50,20,1);
            
	    getch();
	    cleardevice();

	    printf("After translation:");
            bar3d(midx+x+50,midy-(y+100),midx+x+100,midy-(y+50),20,1);

}
