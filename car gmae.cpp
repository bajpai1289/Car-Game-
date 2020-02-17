#include <graphics.h>
#include<iostream>
#include<math.h>
#define pi 3.14159265
float radi(float x)
{
	return pi*x/180;
}
using namespace std;
void obstacles();  
int obsnumber = 0;
int framesPassed = 0;
POINT obsposition[5];

// Function to draw moving car 
void draw_moving_car(void) 
{
	delay(16);
	POINT obsposition[5];
	
	
	
	int i,j;
	i=0; 
	j=0;
	while(1){
		framesPassed+=1;
		if (framesPassed%60==0){
			framesPassed=0;
		}
		//Rectangle outside the car
		 setcolor(GREEN);
 setlinestyle(0,0,5);
 //Line for road
 line(0,745,1000,745);
 line(0,145,1000,145);
	
		setlinestyle(0,0,3);
		// Set color of car as red 
		setcolor(RED); 

		// Thease lines for bonnet and 
		// body of car 
		line(0 + i, 300+j, 210 + i, 300+j); 
		line(50 + i, 300+j, 75 + i, 270+j); 
		line(75 + i, 270+j, 150 + i, 270+j); 
		line(150 + i, 270+j, 165 + i, 300+j); 
		line(0 + i, 300+j, 0 + i, 330+j); 
		line(210 + i, 300+j, 210 + i, 330+j); 

		// For left wheel of car 
		circle(65 + i, 330+j, 15); 
		circle(65 + i, 330+j, 2); 

		// For right wheel of car 
		circle(145 + i, 330+j, 15); 
		circle(145 + i, 330+j, 2); 

		// Line left of left wheel 
		line(0 + i, 330+j, 50 + i, 330+j); 

		// Line middle of both wheel 
		line(80 + i, 330+j, 130 + i, 330+j); 

		// Line right of right wheel 
		line(210 + i, 330+j, 160 + i, 330+j);
		//PlaySound("C:\\Users\\Abhishek Bajpai\\Downloads\\BMW+DRIVEBY.WAV", NULL, SND_ASYNC); 

		delay(5);
		//--------OBSTACLES CODE:----------
//			int k,m;
//	
//	k=rand()%600+145;//To get a random point between the width of the road b/w 145 and 745
//	
//	circle(k,500,15);
		obstacles(); 
	//---------OBSTACLES CODE END-------------

		// To erase previous drawn car, draw 
		// the whole car at same possition 
		// but color using black 
		setcolor(BLACK); 
		
		// Lines for bonnet and body of car 
		line(0 + i, 300+j, 210 + i, 300+j); 
		line(50 + i, 300+j, 75 + i, 270+j); 
		line(75 + i, 270+j, 150 + i, 270+j); 
		line(150 + i, 270+j, 165 + i, 300+j); 
		line(0 + i, 300+j, 0 + i, 330+j); 
		line(210 + i, 300+j, 210 + i, 330+j); 

		// For left wheel of car 
		circle(65 + i, 330+j, 15); 
		circle(65 + i, 330+j, 2); 

		// For right wheel of car 
		circle(145 + i, 330+j, 15); 
		circle(145 + i, 330+j, 2); 

		// Line left of left wheel 
		line(0 + i, 330+j, 50 + i, 330+j); 

		// Line middle of both wheel 
		line(80 + i, 330+j, 130 + i, 330+j); 

		// Line right of right wheel 
		line(210 + i, 330+j, 160 + i, 330+j);

//For Ramdom Obstacles On road:
if(GetAsyncKeyState(VK_RIGHT))
{
	PlaySound("C:\\Users\\lab\\Downloads\\BMW+DRIVEBY.WAV", NULL, SND_ASYNC);
	
	
	i=i+10;
}
if(GetAsyncKeyState(VK_LEFT))
{
	PlaySound("C:\\Users\\lab\\Downloads\\BMW+DRIVEBY.WAV", NULL, SND_ASYNC);
	i=i-10;
}
if(GetAsyncKeyState(VK_UP))
{
	PlaySound("C:\\Users\\lab\\Downloads\\BMW+DRIVEBY.WAV", NULL, SND_ASYNC);

	
	j=j-10;
	if(j+300-30<140)
	{
		setcolor(RED);
		//initwindow(250,250,"GAME OVER");
		settextstyle(1,HORIZ_DIR,7);
		outtextxy(25,25,"GAME OVER");
		delay(5000);
		return;
	}
}
if(GetAsyncKeyState(VK_DOWN))
{
	PlaySound("C:\\Users\\lab\\Downloads\\BMW+DRIVEBY.WAV", NULL, SND_ASYNC);

	
	j=j+10;
	if(330+j>=750)
	{
		setcolor(RED);
	//	initwindow(250,250,"GAME OVER");
		settextstyle(1,HORIZ_DIR,7);
		outtextxy(25,25,"GAME OVER");
		delay(5000);
		return ;
	}
	cout<<"i="<<i<<"\tj="<<j<<endl;
}

}
//obstacles();
}
void obstacles()
{
	POINT obscoords;
	int i;
	for(i=0; i<obsnumber; i++){
		obscoords = obsposition[i];
		circle(obscoords.x,obscoords.y,15);
		setcolor(BLACK);
		setlinestyle(0,0,7);
		circle(obscoords.x+4,obscoords.y,18);
		setlinestyle(0,0,5);
		setcolor(RED);
		obscoords.x = obscoords.x - 5;
		obsposition[i] = obscoords;
		cout<<"Index : "<<i<<"\tDrawing OBSTACLE : "<<obscoords.x<<", "<<obscoords.y<<endl;
	}
	
	if (framesPassed==0){
		int k,m;
		k=rand()%600+145;
		m=1000;
		obsnumber+=1;
		POINT new_coord;
		new_coord.x = m;
		new_coord.y = k;
		obsposition[i]=new_coord;
		cout<<"Making new obs with positions : "<<new_coord.x<<", "<<new_coord.y<<"\tAt index : "<<i<<endl;

//		circle(m,k,15);
//		delay(200);
	}
	cout<<"\n\n";
	//if(sin(radi(obscoord.x))==)

	
} 
 
int main() 
{
	initwindow(1000,1000,"2 Player Game",150,150);
	draw_moving_car();
	getch();
	return 0; 
} 

