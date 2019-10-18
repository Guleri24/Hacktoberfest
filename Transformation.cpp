#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
# define ROUND(a) ((int)(a+0.5))
# define absx(x) x+320
# define absy(y) 240-y
void DrawCordinates()
{
  line(320,0,320,640);
  line(0,240,640,240);
}
int main()
{
	int gd=DETECT,gm;
	int ang,sx,sy,c,k=0,x1,y1,sh,shx,shy,c1;
	int poly[20],choice,i,tdx,tdy,shchoice;
	int x,y;
	system("CLS");
	initgraph(&gd,&gm,"C:\\TurboC3\\bgi");
	DrawCordinates();
	poly[0]=absx(20);
	poly[1]=absy(20);
	poly[2]=absx(70);
	poly[3]=absy(20);
	poly[4]=absx(70);
	poly[5]=absy(70);
	poly[6]=absx(20);
	poly[7]=absy(70);
	poly[8]=poly[0];
	poly[9]=poly[1];
	drawpoly(5,poly);
	printf("This square will be used for 2D transaformations in this program\nPress Any Key To Continue...");
	getch();
	cleardevice();
	closegraph();

	do
	{
		//clrscr();
		printf("\n*******MENU******\n");
		printf("\n1.Translation\n2.Rotation\n3.Scaling\n4.Reflection\n5.Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				//clrscr();
				initgraph(&gd,&gm,"");
				DrawCordinates();
				drawpoly(5,poly);
				printf("\nEnter translation vectors (tx,ty):");
				scanf("%d%d",&tdx,&tdy);
				for(i=0;i<8;i=i+2)
				{
					poly[i]=poly[i]+tdx;
					poly[i+1]-=tdy;
				}
				poly[8]=poly[0];
				poly[9]=poly[1];
				setcolor(RED);
				drawpoly(5,poly);
				getch();
				closegraph();

			case 2:
				//clrscr();
				initgraph(&gd,&gm,"c:\\turboc3\\bgi");
				DrawCordinates();
				drawpoly(5,poly);
				printf("\nEnter rotation  angle:");
				scanf("%d",&ang);
				for(i=0;i<8;i=i+2)
				{
					int tx= poly[i]-320;
					poly[i]=320+((poly[i]-320)*cos(ang*0.01744)-(240-poly[i+1])*sin(ang*0.01744));
					poly[i+1]=240-((240-poly[i+1])*cos(ang*0.01744)+(tx)*sin(ang*0.01744));
				}
				poly[8]=poly[0];
				poly[9]=poly[1];
				setcolor(RED);
				drawpoly(5,poly);
				getch();
				closegraph();
				break;
			case 3:
			//	clrscr();
				initgraph(&gd,&gm,"c:\\turboc3\\bgi");
				DrawCordinates();
				drawpoly(5,poly);
				printf("\nEnter scaling vectors (tx,ty):");
				scanf("%d%d",&sx,&sy);
				for(i=2;i<8;i=i+2)
				{
					poly[i]=poly[i]*sx+(poly[0]*(1-sx));
					poly[i+1]=poly[i+1]*sy+poly[1]*(1-sy);
				}
				poly[8]=poly[0];
				poly[9]=poly[1];
				setcolor(RED);
				drawpoly(5,poly);
				getch();
				closegraph();
				break;
			case 4:
				//clrscr();
				initgraph(&gd,&gm,"c:\\turboc3\\bgi");
				DrawCordinates();
				drawpoly(5,poly);
				printf("\n1.Y-axis\n2.X-axis\n3.exit\n");
				scanf("%d",&c1);
				switch(c1)
				{
					case 1:
						for(k=0;k<8;k=k+2)
						{
							x1=poly[k];
							y1=poly[k+1];
							poly[k]=320-(x1-320);
							poly[k+1]=y1;
						}
						poly[8]=poly[0];
						poly[9]=poly[1];
						setcolor(RED);
						drawpoly(5,poly);
						getch();
						break;
					case 2:
						for(k=0;k<8;k=k+2)
						{
							x1=poly[k];
							y1=poly[k+1];
							poly[k]=x1;
							poly[k+1]=240-(y1-240);
						}
						poly[8]=poly[0];
						poly[9]=poly[1];
						setcolor(RED);
						drawpoly(5,poly);
						getch();
						break;
					case 3:
						break;

				}
				closegraph();
				break;
			case 5:
				exit(0);
			  }
	}while(choice!=6);
}
